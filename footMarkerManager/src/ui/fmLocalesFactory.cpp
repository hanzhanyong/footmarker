//
//  fmLocalesFactory.cpp
//  dynamic
//
//  Created by hzy on 2018/12/28.
//

#include "fmLocalesFactory.h"
#include "fmLocales.h"
#include "locales/fmLocales_EN_US.h"
#include "locales/fmLocales_ZH_CN.h"

//static fmLocales *g_Locales_ZH_CN = NULL;
//static fmLocales *g_Locales_EN_US = NULL;

fmLocalesFactory::fmLocalesFactory()
{
    
}

fmLocalesFactory::~fmLocalesFactory()
{
//    if (g_Locales_EN_US) {
//        delete g_Locales_EN_US;
//        g_Locales_EN_US = NULL;
//    }
}
fmLocales * fmLocalesFactory::create(fmLocalesType type)
{
    fmLocales *locales = NULL;
    switch (type) {
        case FM_LOCALES_ZH_CH:
            locales = new fmLocales_ZH_CN();
            break;
        case FM_LOCALES_EN_US:
            locales = new fmLocales_EN_US();
            break;
        default:
            break;
    }
    return locales;
}
void fmLocalesFactory::release(fmLocales *locales)
{
    switch (locales->getType()) {
        case FM_LOCALES_ZH_CH:
        {
            fmLocales_ZH_CN *l_zh = (fmLocales_ZH_CN *)locales;
            
            delete l_zh;
        }
            break;
        case FM_LOCALES_EN_US:
        {
            fmLocales_EN_US *l_en = (fmLocales_EN_US*)locales;
            delete l_en;
        }
            break;
        default:
            break;
    }
}
