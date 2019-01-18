//
//  fmLocales_ZH_CN.cpp
//  dynamic
//
//  Created by hzy on 2018/12/28.
//

#include "fmLocales_ZH_CN.h"
#include "../res.h"

fmLocales_ZH_CN::fmLocales_ZH_CN()
{
    m_localType = FM_LOCALES_ZH_CH;
}
fmLocales_ZH_CN::fmLocales_ZH_CN(fmLocalesType type):fmLocales(type)
{
    
}

const wxString &fmLocales_ZH_CN::getString(int id)
{
    switch (id) {
            // 主菜单
        case FM_ID_MENU_FILE:
            m_String = "文件";
            break;
        case FM_ID_MENU_EDIT:
            m_String = "编辑";
            break;
        case FM_ID_MENU_VIEW:
            m_String = "视图";
            break;
        case FM_ID_MENU_FIND:
            m_String = "查找";
            break;
        case FM_ID_MENU_WINDOW:
            m_String = "窗口";
            break;
        case FM_ID_MENU_TOOLS:
            m_String = "工具";
            break;
        case FM_ID_MENU_HELP:
            m_String = "帮助";
            break;
            
            
        case FM_ID_MENU_FILE_NEW_GROUP:
            m_String = "新建组";
            break;
        case FM_ID_MENU_FILE_NEW_CONNECTION:
            m_String = "新建连接";
            break;

        case FM_ID_MENU_FILE_NEW_FIND:
            m_String = "新建查询";
            break;
        case FM_ID_MENU_FILE_OPEN_RECENT:
            m_String = "最近文件...";
            break;
        case FM_ID_MENU_FILE_IMPORT_CONNECTION:
            m_String = "导入连接";
            break;
        case FM_ID_MENU_FILE_EXPORT_CONNECTION:
            m_String = "导出连接";
            break;
        case FM_ID_MENU_FILE_CLOSE:
            m_String = "关闭";
            break;
        case FM_ID_MENU_FILE_CLOSE_WIDOWN:
            m_String = "关闭窗口";
            break;
            
        case FM_ID_MENU_EDIT_UNDO:
            m_String = "恢复";
            break;
        case FM_ID_MENU_EDIT_REDO:
            m_String = "重做";
            break;
        case FM_ID_MENU_EDIT_COPY:
            m_String = "复制";
            break;
        case FM_ID_MENU_EDIT_CUT:
            m_String = "剪贴";
            break;
        case FM_ID_MENU_EDIT_PASTE:
            m_String = "粘贴";
            break;
        case FM_ID_MENU_EDIT_DELETE:
            m_String = "删除";
            break;
        case FM_ID_MENU_EDIT_SELECTALL:
            m_String = "全选";
            break;
        case FM_ID_MENU_EDIT_FIND:
            m_String = "查找";
            break;
        case FM_ID_MENU_EDIT_REPLACE:
            m_String = "替换";
            break;
            
//#define FM_ID_MENU_VIEW_NAV_LEFT_TREE                  13101
//#define FM_ID_MENU_VIEW_NAV_RIGHT_INFO                 13102
//#define FM_ID_MENU_VIEW_TOOLBAR_MAIN                   13201
//#define FM_ID_MENU_VIEW_TOOLBAR_STATUS                 13202
//#define FM_ID_MENU_VIEW_FULLSCREEN                     13500
//            
//            //#define FM_ID_MENU_WINDOW_MINIMIZE                     14100
//            //#define FM_ID_MENU_WINDOW_ZOOM                         14101
//            
//#define FM_ID_MENU_TOOLS_DATA_IMPORT                   15001
//#define FM_ID_MENU_TOOLS_DATA_EXPORT                   15002
//#define FM_ID_MENU_TOOLS_TABLE                         15100
//#define FM_ID_MENU_TOOLS_TABLE                         15100
//#define FM_ID_MENU_TOOLS_KEYS                          15102
//#define FM_ID_MENU_TOOLS_USERS                         15105
//#define FM_ID_MENU_TOOLS_BACKUP                        15108
//#define FM_ID_MENU_TOOLS_MODELS                        15190
//            
//#define FM_ID_MENU_HELP_ABOUT                          19001
//#define FM_ID_MENU_HELP_ONLINE                         19101
//#define FM_ID_MENU_HELP_README                         19102
//#define FM_ID_MENU_HELP_LANGUAGE                       19900
//#define FM_ID_MENU_HELP_LANGUAGE_ZH_CN                 19901
//#define FM_ID_MENU_HELP_LANGUAGE_EN_US                 19902
            
            
            // 工具栏
        case FM_ID_TOOLBAR_NEW_CONNECTION:
            m_String = "连接";
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
            m_String = "新建查询";
            break;
        case FM_ID_TOOLBAR_TABLE:
            m_String = "表";
            break;
        case FM_ID_TOOLBAR_KEYS:
            m_String = "键";
            break;
        case FM_ID_TOOLBAR_USERS:
            m_String = "用户";
            break;
        case FM_ID_TOOLBAR_BACKUP:
            m_String = "备份";
            break;
        case FM_ID_TOOLBAR_MODELS:
            m_String = "模型";
            break;
        case FM_ID_TOOLBAR_ABOUT:
            m_String = "关于";
            break;
        case FM_ID_MENU_HELP_ONLINE:
            m_String = "在线帮助";
        case FM_ID_MENU_HELP_README:
            m_String = "Readme";
        case FM_ID_TOOLBAR_LANGUAGE:
            m_String = "语言";
            break;
        case FM_ID_TOOLBAR_LANGUAGE_ZH_CN:
            m_String = "中文(简体)";
            break;
        case FM_ID_TOOLBAR_LANGUAGE_EN_US:
            m_String = "英语(美国)";
            break;
        default:
            break;
    }
    
    return m_String;
}
