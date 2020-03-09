#ifndef HEADER_7D965EE5F5608B26
#define HEADER_7D965EE5F5608B26

/***************************************************************
 * Name:      multi_form_wxwidgetsMain.h
 * Purpose:   Defines Application Frame
 * Author:    Talipov S.N. (talipovsn@gmail.com)
 * Created:   2020-03-06
 * Copyright: Talipov S.N. (https://github.com/tsnsoft)
 * License:
 **************************************************************/

#ifndef MULTI_FORM_WXWIDGETSMAIN_H
#define MULTI_FORM_WXWIDGETSMAIN_H

//(*Headers(multi_form_wxwidgetsFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class multi_form_wxwidgetsFrame: public wxFrame
{
    public:

        multi_form_wxwidgetsFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~multi_form_wxwidgetsFrame();

    private:

        //(*Handlers(multi_form_wxwidgetsFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(multi_form_wxwidgetsFrame)
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        //*)

        //(*Declarations(multi_form_wxwidgetsFrame)
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MULTI_FORM_WXWIDGETSMAIN_H
#endif // header guard

