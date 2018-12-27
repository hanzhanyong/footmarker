/**************************************************************************************
 * @file            wxSizeReportCtrl.h
 * @brief           Ctrl
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-18
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/


#ifndef wxSizeReportCtrl_h
#define wxSizeReportCtrl_h

//#include "wx/grid.h"
//#include "wx/treectrl.h"
//#include "wx/spinctrl.h"
//#include "wx/artprov.h"
//#include "wx/clipbrd.h"
//#include "wx/image.h"
//#include "wx/colordlg.h"
//#include "wx/wxhtml.h"
//#include "wx/imaglist.h"
//#include "wx/dataobj.h"
//#include "wx/dcclient.h"
//#include "wx/bmpbuttn.h"
//#include "wx/menu.h"
//#include "wx/toolbar.h"
//#include "wx/statusbr.h"
//#include "wx/msgdlg.h"
//#include "wx/textdlg.h"

#include "wx/aui/aui.h"

// -- wxSizeReportCtrl --
// (a utility control that always reports it's client size)
class wxSizeReportCtrl : public wxControl
{
public:
    wxSizeReportCtrl(wxWindow* parent, wxWindowID id = wxID_ANY,
                     const wxPoint& pos = wxDefaultPosition,
                     const wxSize& size = wxDefaultSize,
                     wxAuiManager* mgr = NULL);
    
private:
    void OnPaint(wxPaintEvent& WXUNUSED(evt));
    void OnEraseBackground(wxEraseEvent& WXUNUSED(evt));
    void OnSize(wxSizeEvent& WXUNUSED(evt));

private:
    wxAuiManager* m_mgr;
    
    wxDECLARE_EVENT_TABLE();
};
#endif /* wxSizeReportCtrl_h */
