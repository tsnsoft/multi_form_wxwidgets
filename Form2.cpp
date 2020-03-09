#include "Form2.h"
#include <wx/msgdlg.h>

// ��� ������ � ������ ����� ����� ��� ������
#include "multi_form_wxwidgetsMain.h" // ����������� ������� � ������� ����
wxWindow *form1; // ���������� ��� �������� ������ �� ������ ����
// ----------------------------------------------

//(*InternalHeaders(Form2)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Form2)
const long Form2::ID_BUTTON1 = wxNewId();
const long Form2::ID_STATICTEXT1 = wxNewId();
const long Form2::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Form2,wxFrame)
    //(*EventTable(Form2)
    //*)
END_EVENT_TABLE()

Form2::Form2(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    // ��� ������ � ������ ����� ����� ��� ������
    form1 = parent; // �������� ������ �� ������ ���� �� parent

    //(*Initialize(Form2)
    Create(parent, id, _("������ ����"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    SetClientSize(wxSize(400,147));
    Move(wxDefaultPosition);
    Button1 = new wxButton(this, ID_BUTTON1, _("<<< �����"), wxPoint(32,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("�����"), wxPoint(72,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("�����"), wxPoint(288,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Form2::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Form2::OnButton2Click);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Form2::OnClose);
    Connect(wxEVT_SET_FOCUS,(wxObjectEventFunction)&Form2::OnSetFocus);
    //*)

}

Form2::~Form2()
{
    //(*Destroy(Form2)
    //*)
}


// ����� �� ��������� �� �������� ����
void Form2::OnClose(wxCloseEvent& event) {
    form1 -> Show (); // ������ ���� ���������
    this -> Hide(); // ��� ���� ��������
}

// ������ "�����"
void Form2::OnButton1Click(wxCommandEvent& event) {
    this -> Close(); // ��������� ��� ����
}

// ����� �� ��������� �� ������ ��������
void Form2::OnButton2Click(wxCommandEvent& event) {
    form1 -> Close(); // �������� ������ (�������) ����� ��������� ��� ���������
}

// ��� ������ � ������ ����� ����� ��������� ������� �������� ������� ����
void Form2::OnSetFocus(wxFocusEvent& event) {
    extern wxString form1_data; // ��������� ������ �� ���������� ����������
    StaticText1 -> SetLabel(form1_data); // ������ �������� � ���������� �� ����� ����������
}
