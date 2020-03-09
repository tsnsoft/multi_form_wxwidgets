/***************************************************************
 * Name:      multi_form_wxwidgetsApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Talipov S.N. (talipovsn@gmail.com)
 * Created:   2020-03-06
 * Copyright: Talipov S.N. (https://github.com/tsnsoft)
 * License:
 **************************************************************/

#include "multi_form_wxwidgetsApp.h"

//(*AppHeaders
#include "multi_form_wxwidgetsMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(multi_form_wxwidgetsApp);

bool multi_form_wxwidgetsApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	multi_form_wxwidgetsFrame* Frame = new multi_form_wxwidgetsFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
