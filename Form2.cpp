#include "Form2.h"
#include <wx/msgdlg.h>

// ДЛЯ РАБОТЫ С ПЕРВЫМ ОКНОМ НУЖНЫ ЭТИ СТРОКИ
#include "multi_form_wxwidgetsMain.h" // Подключение доступа к первому окну
wxWindow *form1; // Переменная для хранения ссылки на первое окно
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
    // ДЛЯ РАБОТЫ С ПЕРВЫМ ОКНОМ НУЖНА ЭТА СТРОКА
    form1 = parent; // Получаем ссылку на первое окно из parent

    //(*Initialize(Form2)
    Create(parent, id, _("Второе окно"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    SetClientSize(wxSize(400,147));
    Move(wxDefaultPosition);
    Button1 = new wxButton(this, ID_BUTTON1, _("<<< Назад"), wxPoint(32,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Метка"), wxPoint(72,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Выход"), wxPoint(288,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
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


// ВЫХОД ИЗ ПРОГРАММЫ ПО ЗАКРЫТИЮ ОКНА
void Form2::OnClose(wxCloseEvent& event) {
    form1 -> Show (); // Первое окно открываем
    this -> Hide(); // Это окно скрываем
}

// КНОПКА "НАЗАД"
void Form2::OnButton1Click(wxCommandEvent& event) {
    this -> Close(); // Закрываем это окно
}

// ВЫХОД ИЗ ПРОГРАММЫ ПО КНОПКЕ ЗАКРЫТИЯ
void Form2::OnButton2Click(wxCommandEvent& event) {
    form1 -> Close(); // Закрывая первую (главную) форму закрываем всю программу
}

// ДЛЯ РАБОТЫ С ПЕРВЫМ ОКНОМ НУЖНА ОБРАБОТКА СОБЫТИЯ ОТКРЫТИЯ ВТОРОГО ОКНА
void Form2::OnSetFocus(wxFocusEvent& event) {
    extern wxString form1_data; // Описываем ссылку на глобальную переменную
    StaticText1 -> SetLabel(form1_data); // Задаем значение в компоненте из общей переменной
}
