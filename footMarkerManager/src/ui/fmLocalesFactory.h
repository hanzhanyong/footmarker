/**************************************************************************************
 * @file            fmLocalesFactory
 * @brief           Locale Factory Language
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-28
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 **************************************************************************************/


#ifndef fmLocalesFactory_h
#define fmLocalesFactory_h

#include <stdio.h>
#include "fmLocales.h"

class fmLocalesFactory {
public:
    fmLocalesFactory();
    ~fmLocalesFactory();
    
    static fmLocales*       create(fmLocalesType type);
    static void             release(fmLocales *locales);
};
#endif /* fmLocalesFactory_h */
