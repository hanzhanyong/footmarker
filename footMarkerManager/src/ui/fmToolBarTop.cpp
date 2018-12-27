//
//  ToolBarTop.cpp
//  dynamic
//
//  Created by hzy on 2018/12/25.
//

#include "fmToolBarTop.h"
#include "RES.h"

#include <wx/artprov.h>
#include <wx/menu.h>

wxBEGIN_EVENT_TABLE(fmToolBarTop, wxAuiToolBar)
EVT_AUITOOLBAR_TOOL_DROPDOWN(FM_ID_TOOLBAR_NEW_CONNECTION, fmToolBarTop::OnDropDownToolbarItem)
EVT_AUITOOLBAR_TOOL_DROPDOWN(FM_ID_TOOLBAR_LANGUAGE, fmToolBarTop::OnDropDownToolbarItem)
wxEND_EVENT_TABLE()


fmToolBarTop::fmToolBarTop(
             wxWindow* parent,
             wxWindowID id,
             const wxPoint& pos,
             const wxSize& size,
             long style) :
wxAuiToolBar(parent, id, pos, size, style)
{
    this->InitItems();
}

fmToolBarTop::~fmToolBarTop()
{
//    wxAuiToolBar::~wxAuiToolBar();
}

void fmToolBarTop::InitItems()
{
    wxSize bitmapSize = wxSize(32, 32);
    wxBitmap bitmap = wxArtProvider::GetBitmap(wxART_NORMAL_FILE, wxART_OTHER, bitmapSize);
    this->SetToolBitmapSize(bitmapSize);
    
    this->AddTool(FM_ID_TOOLBAR_NEW_CONNECTION, FM_IDS_TOOLBAR_NEW_CONNECTION, bitmap);
    this->AddSeparator();
    

    this->AddTool(FM_ID_TOOLBAR_NEW_FIND, FM_IDS_TOOLBAR_NEW_FIND, bitmap);
//    this->AddTool(FM_ID_TOOLBAR_TABLE, FM_IDS_TOOLBAR_TABLE, bitmap);
    this->AddTool(FM_ID_TOOLBAR_KEYS, FM_IDS_TOOLBAR_KEYS, bitmap);
    this->AddSeparator();

    this->AddTool(FM_ID_TOOLBAR_USERS, FM_IDS_TOOLBAR_USERS, bitmap);
    this->AddTool(FM_ID_TOOLBAR_MODELS, FM_IDS_TOOLBAR_MODELS, bitmap);
    this->AddSeparator();
    
    this->AddTool(FM_ID_TOOLBAR_BACKUP, FM_IDS_TOOLBAR_BACKUP, bitmap);
    this->AddTool(FM_ID_TOOLBAR_ABOUT, FM_IDS_TOOLBAR_ABOUT, bitmap);
    
    this->AddStretchSpacer();
    
    this->AddTool(FM_ID_TOOLBAR_LANGUAGE, FM_IDS_TOOLBAR_LANGUAGE, bitmap);
    
    // DropDown
    this->SetToolDropDown(FM_ID_TOOLBAR_NEW_CONNECTION, true);
    this->SetToolDropDown(FM_ID_TOOLBAR_LANGUAGE, true);
}


void fmToolBarTop::OnDropDownToolbarItem(wxAuiToolBarEvent& evt)
{
    if (evt.IsDropDownClicked())
    {
        wxAuiToolBar* tb = static_cast<wxAuiToolBar*>(evt.GetEventObject());

        tb->SetToolSticky(evt.GetId(), true);

        // create the popup menu
        wxMenu menuPopup;
        wxBitmap bmp = wxArtProvider::GetBitmap(wxART_QUESTION, wxART_OTHER, wxSize(16,16));
        wxMenuItem* menuItem = NULL;
        switch (evt.GetId()) {
            case FM_ID_TOOLBAR_NEW_CONNECTION:
                menuItem =  new wxMenuItem(&menuPopup, FM_ID_TOOLBAR_NEW_CONNECTION_REDIS, FM_IDS_TOOLBAR_NEW_CONNECTION_REDIS);
                menuItem->SetBitmap(bmp);
                menuPopup.Append(menuItem);
                
                menuItem =  new wxMenuItem(&menuPopup, FM_ID_TOOLBAR_NEW_CONNECTION_LEVELDB, FM_IDS_TOOLBAR_NEW_CONNECTION_LEVELDB);
                menuItem->SetBitmap(bmp);
                menuPopup.Append(menuItem);
                menuItem->Enable(false);
                
                menuPopup.AppendSeparator();
                
                menuItem =  new wxMenuItem(&menuPopup, FM_ID_TOOLBAR_NEW_CONNECTION_MONGO, FM_IDS_TOOLBAR_NEW_CONNECTION_MONGO);
                menuItem->SetBitmap(bmp);
                menuPopup.Append(menuItem);
                menuItem->Enable(false);
                
                menuPopup.AppendSeparator();
                
                menuItem =  new wxMenuItem(&menuPopup, FM_ID_TOOLBAR_NEW_CONNECTION_MYSQL, FM_IDS_TOOLBAR_NEW_CONNECTION_MYSQL);
                menuItem->SetBitmap(bmp);
                menuPopup.Append(menuItem);
                menuItem->Enable(false);
                break;
            case FM_ID_TOOLBAR_LANGUAGE:
                menuItem =  new wxMenuItem(&menuPopup, FM_ID_TOOLBAR_LANGUAGE_ZH_CN, FM_IDS_TOOLBAR_LANGUAGE_ZH_CN);
                menuItem->SetBitmap(bmp);
                menuPopup.Append(menuItem);
                
                menuItem =  new wxMenuItem(&menuPopup, FM_ID_TOOLBAR_LANGUAGE_EN_US, FM_IDS_TOOLBAR_LANGUAGE_EN_US);
                menuItem->SetBitmap(bmp);
                menuPopup.Append(menuItem);
                break;
            default:
                break;
        }
        
        // error
        if (menuItem == NULL) {
            return;
        }

        // line up our menu with the button
        wxRect rect = tb->GetToolRect(evt.GetId());
        wxPoint pt = tb->ClientToScreen(rect.GetBottomLeft());
        pt = ScreenToClient(pt);

        PopupMenu(&menuPopup, pt);

        // make sure the button is "un-stuck"
        tb->SetToolSticky(evt.GetId(), false);
    }
    
}

