/**************************************************************************************
 * @file            MainApp.cpp
 * @brief           Main App in program
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-18
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/

#ifndef MainApp_h
#define MainApp_h

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#include "wx/app.h"
#include "ui/fmMainFrame.h"

// -- application --
class fmMainApp : public wxApp
{
public:
    bool OnInit() wxOVERRIDE;
};

// ==================================================================================
// MainApp Implement
// ==================================================================================
//wxIMPLEMENT_APP(MainApp);
wxDECLARE_APP(fmMainApp);
wxIMPLEMENT_APP(fmMainApp);

// The `main program' equivalent
// creating the windows and returning the main frame
bool fmMainApp::OnInit()
{
    if ( !wxApp::OnInit() )
        return false;
    
    // Create the main frame window
    fmMainFrame* frame = new fmMainFrame(NULL,
                                 wxID_ANY,
                                 wxT("footMaker Manager"),
                                 wxDefaultPosition,
                                 wxSize(800, 600));
    frame->Show();
    
//#if wxUSE_STATUSBAR
//    frame->SetStatusText(wxT("Hello, wxWidgets"));
//#endif
    
//    wxInitAllImageHandlers();
    
    return true;
}

#endif
