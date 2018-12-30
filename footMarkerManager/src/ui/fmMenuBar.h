//
//  fmMenuBar.hpp
//  dynamic
//
//  Created by hzy on 2018/12/30.
//
/**************************************************************************************
 * @file            fmMenuBar.h
 * @brief           Menu Bar
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-30
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/

#ifndef fmMenuBar_h
#define fmMenuBar_h


#include <wx/menu.h>

class fmMenuBar : public wxMenuBar
{
public:
    fmMenuBar();
    // unused under MSW
    fmMenuBar(long style);
    // menubar takes ownership of the menus arrays but copies the titles
    fmMenuBar(size_t n, wxMenu *menus[], const wxString titles[], long style = 0);

    virtual ~fmMenuBar();
    
private:
    void                            InitItems();
    
private:
    void                            OnMenuItem(wxCommandEvent& evt);
    
    
//    wxDECLARE_EVENT_TABLE();
};


#endif /* fmMenuBar_h */
