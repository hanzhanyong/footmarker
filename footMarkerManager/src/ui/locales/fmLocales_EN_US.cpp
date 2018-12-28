//
//  fmLocales_EN_US.cpp
//  dynamic
//
//  Created by hzy on 2018/12/28.
//

#include "fmLocales_EN_US.h"
#include "../res.h"

fmLocales_EN_US::fmLocales_EN_US()
{
    m_localType = FM_LOCALES_EN_US;
}
fmLocales_EN_US::fmLocales_EN_US(fmLocalesType type):fmLocales(type)
{
    
}

const wxString &fmLocales_EN_US::getString(int id)
{
    switch (id) {
        case FM_ID_TOOLBAR_NEW_CONNECTION:
        case FM_ID_MENU_FILE_NEW_CONNECTION:
            m_String = "Connection";
            break;
        case FM_ID_TOOLBAR_NEW_CONNECTION_REDIS:
        case FM_ID_MENU_FILE_NEW_CONNECTION_REDIS:
            m_String = "Redis";
            break;
        case FM_ID_TOOLBAR_NEW_CONNECTION_LEVELDB:
        case FM_ID_MENU_FILE_NEW_CONNECTION_LEVELDB:
            m_String = "LevelDB";
            break;
        case FM_ID_TOOLBAR_NEW_CONNECTION_MONGO:
        case FM_ID_MENU_FILE_NEW_CONNECTION_MONGO:
            m_String = "MongoDB";
            break;
        case FM_ID_TOOLBAR_NEW_CONNECTION_MYSQL:
        case FM_ID_MENU_FILE_NEW_CONNECTION_MYSQL:
            m_String = "MySQL";
            break;
        case FM_ID_TOOLBAR_NEW_FIND:
            m_String = "Find";
            break;
        case FM_ID_TOOLBAR_TABLE:
            m_String = "Table";
            break;
        case FM_ID_TOOLBAR_KEYS:
            m_String = "Keys";
            break;
        case FM_ID_TOOLBAR_USERS:
            m_String = "Users";
            break;
        case FM_ID_TOOLBAR_BACKUP:
            m_String = "Backup";
        case FM_ID_TOOLBAR_MODELS:
            m_String = "Models";
            break;
        case FM_ID_TOOLBAR_ABOUT:
            m_String = "About";
            break;
        case FM_ID_TOOLBAR_LANGUAGE:
            m_String = "Language";
            break;
        case FM_ID_TOOLBAR_LANGUAGE_ZH_CN:
            m_String = "Chinese(Simple)";
            break;
        case FM_ID_TOOLBAR_LANGUAGE_EN_US:
            m_String = "English(US)";
            break;
        default:
            break;
    }
    
    return m_String;
}
