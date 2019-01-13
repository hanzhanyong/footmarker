/**************************************************************************************
 * @file            fmLocales_ZH_CN.h
 * @brief           Locale ZH_CN Language
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-28
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/


#ifndef fmLocales_ZH_CN_h
#define fmLocales_ZH_CN_h

#include "fmLocales.h"

class fmLocales_ZH_CN : public fmLocales {
public:
    fmLocales_ZH_CN();
    fmLocales_ZH_CN(fmLocalesType type);
    ~fmLocales_ZH_CN(){}
    
    virtual const wxString          &getString(int id);
};

#endif /* fmLocales_ZH_CN_h */
