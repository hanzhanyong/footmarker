/**************************************************************************************
 * @file            fmLocales_EN_US.h
 * @brief           Locale EN_US Language
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-28
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/

#ifndef fmLocales_EN_US_h
#define fmLocales_EN_US_h

#include "fmLocales.h"

class fmLocales_EN_US : public fmLocales {
public:
    fmLocales_EN_US();
    fmLocales_EN_US(fmLocalesType type);
    ~fmLocales_EN_US(){}
    
    virtual const wxString          &getString(int id);
};

#endif /* fmLocales_EN_US_h */
