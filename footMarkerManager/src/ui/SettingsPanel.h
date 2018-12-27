/**************************************************************************************
 * @file            wxSizeReportCtrl.h
 * @brief           Ctrl
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-18
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/


#ifndef SettingsPanel_h
#define SettingsPanel_h

//#include "wx/grid.h"
//#include "wx/treectrl.h"
#include "wx/spinctrl.h"
//#include "wx/artprov.h"
//#include "wx/clipbrd.h"
//#include "wx/image.h"
//#include "wx/colordlg.h"
//#include "wx/wxhtml.h"
//#include "wx/imaglist.h"
//#include "wx/dataobj.h"
//#include "wx/dcclient.h"
#include "wx/bmpbuttn.h"
//#include "wx/menu.h"
//#include "wx/toolbar.h"
//#include "wx/statusbr.h"
//#include "wx/msgdlg.h"
//#include "wx/textdlg.h"

#include "wx/aui/aui.h"
#include <ui/MainFrame.h>



namespace footmarker {
    namespace ui {
        class MainFrame;
        class SettingsPanel : public wxPanel
        {
            enum
            {
                ID_PaneBorderSize = wxID_HIGHEST+1,
                ID_SashSize,
                ID_CaptionSize,
                ID_BackgroundColor,
                ID_SashColor,
                ID_InactiveCaptionColor,
                ID_InactiveCaptionGradientColor,
                ID_InactiveCaptionTextColor,
                ID_ActiveCaptionColor,
                ID_ActiveCaptionGradientColor,
                ID_ActiveCaptionTextColor,
                ID_BorderColor,
                ID_GripperColor
            };
            
        public:
            
            SettingsPanel(wxWindow* parent, MainFrame* frame);
            
        private:
            
            wxBitmap CreateColorBitmap(const wxColour& c);
            
            void UpdateColors();
            
            void OnPaneBorderSize(wxSpinEvent& event);
            
            void OnSashSize(wxSpinEvent& event);
            
            void OnCaptionSize(wxSpinEvent& event);
            
            void OnSetColor(wxCommandEvent& event);
            
        private:
            
            MainFrame* m_frame;
            wxSpinCtrl* m_border_size;
            wxSpinCtrl* m_sash_size;
            wxSpinCtrl* m_caption_size;
            wxBitmapButton* m_inactive_caption_text_color;
            wxBitmapButton* m_inactive_caption_gradient_color;
            wxBitmapButton* m_inactive_caption_color;
            wxBitmapButton* m_active_caption_text_color;
            wxBitmapButton* m_active_caption_gradient_color;
            wxBitmapButton* m_active_caption_color;
            wxBitmapButton* m_sash_color;
            wxBitmapButton* m_background_color;
            wxBitmapButton* m_border_color;
            wxBitmapButton* m_gripper_color;
            
            wxDECLARE_EVENT_TABLE();
        };
    }
}


#endif /* SettingsPanel_h */
