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
#include "ui/MainFrame.h"

using namespace footmarker::ui;



// -- application --
class MainApp : public wxApp
{
public:
    bool OnInit() wxOVERRIDE;
};

// ==================================================================================
// MainApp Implement
// ==================================================================================
//wxIMPLEMENT_APP(MainApp);
wxDECLARE_APP(MainApp);
wxIMPLEMENT_APP(MainApp);

// The `main program' equivalent
// creating the windows and returning the main frame
bool MainApp::OnInit()
{
    if ( !wxApp::OnInit() )
        return false;
    
    // Create the main frame window
    MainFrame* frame = new MainFrame(NULL,
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
