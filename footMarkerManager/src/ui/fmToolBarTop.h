/**************************************************************************************
 * @file            fmToolBarTop.h
 * @brief           Top ToolBar
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-25
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/


#ifndef FM_TOOLBARTOP
#define FM_TOOLBARTOP

#include <wx/aui/aui.h>

class fmLocales;
class fmToolBarTop : public wxAuiToolBar
{
public:
    fmToolBarTop(wxWindow* parent,
                 wxWindowID id = wxID_ANY,
                 const wxPoint& pos = wxDefaultPosition,
                 const wxSize& size = wxDefaultSize,
                 long style = wxAUI_TB_DEFAULT_STYLE);
    
    virtual ~fmToolBarTop();
    
private:
    void                            InitItems();

private:
    void                            OnDropDownToolbarItem(wxAuiToolBarEvent& evt);
    void                            OnMenuItem(wxCommandEvent& evt);

private:
    fmLocales                      *m_LocalLanguage;
    
    wxDECLARE_EVENT_TABLE();
};

#endif /* FM_TOOLBARTOP */
