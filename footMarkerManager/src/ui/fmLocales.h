/**************************************************************************************
 * @file            fmLocales.h
 * @brief           Locale Language
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-28
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/


#ifndef fmLocales_h
#define fmLocales_h

#include <wx/string.h>

enum fmLocalesType{
    FM_LOCALES_ZH_CH,
    FM_LOCALES_EN_US
};

class fmLocales {
public:
    fmLocales() {}
    fmLocales(fmLocalesType type) : m_localType(type) {}
    ~fmLocales() {}
    
    const fmLocalesType            &getType() { return m_localType; }
    virtual const wxString         &getString(int id) = 0;
protected:
    fmLocalesType                   m_localType;
    wxString                        m_String;
};

#endif /* fmLocales_h */
