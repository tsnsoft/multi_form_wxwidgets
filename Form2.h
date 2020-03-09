#ifndef FORM2_H
#define FORM2_H

//(*Headers(Form2)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/stattext.h>
//*)

class Form2: public wxFrame
{
	public:

		Form2(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Form2();

		//(*Declarations(Form2)
		wxButton* Button1;
		wxButton* Button2;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Form2)
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(Form2)
		void OnClose(wxCloseEvent& event);
		void OnSetFocus(wxFocusEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnMouseEnter(wxMouseEvent& event);
		void OnSetFocus2(wxFocusEvent& event);
		void OnMouseEnter1(wxMouseEvent& event);
		void OnPaint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
