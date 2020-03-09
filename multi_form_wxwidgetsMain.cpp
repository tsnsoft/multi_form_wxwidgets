/***************************************************************
 * Name:      multi_form_wxwidgetsMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Talipov S.N. (talipovsn@gmail.com)
 * Created:   2020-03-06
 * Copyright: Talipov S.N. (https://github.com/tsnsoft)
 * License:
 **************************************************************/

#include "multi_form_wxwidgetsMain.h"
#include <wx/msgdlg.h>

// ��� ������ �� ������ ����� ����� ��� ������
#include "Form2.h"
Form2 *form2; // ���������� ��� �������� ������ �� ������ �����
wxString form1_data; // ����� ����������
// ----------------------------------------------


//(*InternalHeaders(multi_form_wxwidgetsFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(multi_form_wxwidgetsFrame)
const long multi_form_wxwidgetsFrame::ID_BUTTON1 = wxNewId();
const long multi_form_wxwidgetsFrame::ID_STATICTEXT1 = wxNewId();
const long multi_form_wxwidgetsFrame::ID_TEXTCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(multi_form_wxwidgetsFrame,wxFrame)
    //(*EventTable(multi_form_wxwidgetsFrame)
    //*)
END_EVENT_TABLE()

multi_form_wxwidgetsFrame::multi_form_wxwidgetsFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(multi_form_wxwidgetsFrame)
    Create(parent, id, _("������� �����"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    SetClientSize(wxSize(400,106));
    Button1 = new wxButton(this, ID_BUTTON1, _("����� >>>"), wxPoint(280,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("��� ���� ���\?"), wxPoint(32,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(136,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&multi_form_wxwidgetsFrame::OnButton1Click);
    //*)

    // ��� ������ �� ������ ����� ����� ��� ������
    form2 = new Form2(this); // ������� ������ ���� � ������ � ��������� ������ �� ���� � ���������� form2
}

multi_form_wxwidgetsFrame::~multi_form_wxwidgetsFrame()
{
    //(*Destroy(multi_form_wxwidgetsFrame)
    //*)
}

// ������� �� ������ �����
void multi_form_wxwidgetsFrame::OnButton1Click(wxCommandEvent& event) {
    // ������ � ����� ���������� ������ �������� ��� ������ �����
    form1_data = TextCtrl1 -> GetValue();
    // ��������� � ���������� ������ ����, ������ ���� ��������
    form2 -> Show(); form2 -> SetFocus(); this -> Hide();
}

