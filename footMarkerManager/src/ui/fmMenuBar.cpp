//
//  fmMenuBar.cpp
//  dynamic
//
//  Created by hzy on 2018/12/30.
//

#include "fmMenuBar.h"
#include "res.h"


fmMenuBar::fmMenuBar()
{
    
}

fmMenuBar::fmMenuBar(long style):
wxMenuBar(style)
{
    
}

fmMenuBar::fmMenuBar(size_t n, wxMenu *menus[], const wxString titles[], long style):
wxMenuBar(n,menus,titles,style)
{
    
}

fmMenuBar::~fmMenuBar()
{
    
}

void fmMenuBar::InitItems()
{
    wxMenu* fileMenu = new wxMenu;
    fileMenu->Append(wxID_EXIT);
    
    wxMenu* viewMenu = new wxMenu;
    viewMenu->Append(1, _("Create Text Control"));
    viewMenu->Append(2, _("Create HTML Control"));
    
}

void fmMenuBar::OnMenuItem(wxCommandEvent& evt)
{
    
}
