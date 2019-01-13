/**************************************************************************************
 * @file            res.h
 * @brief           resources file
 *
 * @author          hanzhanyong(306679711@qq.com)
 * @date            2018-12-24
 * @copyright       (C) Copyright 2018, footMarker Corporation, All Rights Reserved
 
 
 VC++常用命名法和宏定义
 https://blog.csdn.net/qq_29796317/article/details/74357548
 
 **************************************************************************************/

//#define LANGUAGE_ZH_CN 1
////#define LANGUAGE_EN_US 1
//
///*----------------------------------- Language --------------------------------------*/
//
//#if defined(LANGUAGE_EN_US) && LANGUAGE_EN_US == 1
//#include "EN_US.h"
//#elif defined(LANGUAGE_ZH_CN) && LANGUAGE_ZH_CN == 1
//#include "ZH_CN.h"
//#endif


/*----------------------------------- RES -------------------------------------------*/

#ifndef RES_H
#define RES_H

#define FM_IDR_MAINFRAME                               10000

#define FM_ID_MENU_FILE                                11000
#define FM_ID_MENU_EDIT                                12000
#define FM_ID_MENU_VIEW                                13000
#define FM_ID_MENU_FIND                                14000
#define FM_ID_MENU_WINDOW                              15000
#define FM_ID_MENU_TOOLS                               16000
#define FM_ID_MENU_HELP                                19000

/************************************ MENU *********************************************/
#define FM_ID_MENU_FILE_NEW_GROUP                      11100
#define FM_ID_MENU_FILE_NEW_CONNECTION                 11200
#define FM_ID_MENU_FILE_NEW_CONNECTION_REDIS           11201
#define FM_ID_MENU_FILE_NEW_CONNECTION_LEVELDB         11202
#define FM_ID_MENU_FILE_NEW_CONNECTION_MONGO           11203
#define FM_ID_MENU_FILE_NEW_CONNECTION_MYSQL           11205
#define FM_ID_MENU_FILE_NEW_FIND                       11300
#define FM_ID_MENU_FILE_OPEN_RECENT                    11400
#define FM_ID_MENU_FILE_IMPORT_CONNECTION              11510
#define FM_ID_MENU_FILE_EXPORT_CONNECTION              11520
#define FM_ID_MENU_FILE_CLOSE                          11910
#define FM_ID_MENU_FILE_CLOSE_WIDOWN                   11920

#define FM_ID_MENU_EDIT_UNDO                           12101
#define FM_ID_MENU_EDIT_REDO                           12102
#define FM_ID_MENU_EDIT_COPY                           12103
#define FM_ID_MENU_EDIT_CUT                            12104
#define FM_ID_MENU_EDIT_PASTE                          12105
#define FM_ID_MENU_EDIT_DELETE                         12106
#define FM_ID_MENU_EDIT_SELECTALL                      12107
#define FM_ID_MENU_EDIT_FIND                           12108
#define FM_ID_MENU_EDIT_REPLACE                        12109

#define FM_ID_MENU_VIEW_NAV_LEFT_TREE                  13101
#define FM_ID_MENU_VIEW_NAV_RIGHT_INFO                 13102
#define FM_ID_MENU_VIEW_TOOLBAR_MAIN                   13201
#define FM_ID_MENU_VIEW_TOOLBAR_STATUS                 13202
#define FM_ID_MENU_VIEW_FULLSCREEN                     13500

//#define FM_ID_MENU_WINDOW_MINIMIZE                     14100
//#define FM_ID_MENU_WINDOW_ZOOM                         14101

#define FM_ID_MENU_TOOLS_DATA_IMPORT                   15001
#define FM_ID_MENU_TOOLS_DATA_EXPORT                   15002
#define FM_ID_MENU_TOOLS_TABLE                         15100
#define FM_ID_MENU_TOOLS_TABLE                         15100
#define FM_ID_MENU_TOOLS_KEYS                          15102
#define FM_ID_MENU_TOOLS_USERS                         15105
#define FM_ID_MENU_TOOLS_BACKUP                        15108
#define FM_ID_MENU_TOOLS_MODELS                        15190

#define FM_ID_MENU_HELP_ABOUT                          19001
#define FM_ID_MENU_HELP_ONLINE                         19101
#define FM_ID_MENU_HELP_README                         19102
#define FM_ID_MENU_HELP_LANGUAGE                       19900
#define FM_ID_MENU_HELP_LANGUAGE_ZH_CN                 19901
#define FM_ID_MENU_HELP_LANGUAGE_EN_US                 19902

/************************************ TOOLBAR ********************************************/
#define FM_ID_TOOLBAR_NEW_CONNECTION                   FM_ID_MENU_FILE_NEW_CONNECTION + 10000
#define FM_ID_TOOLBAR_NEW_CONNECTION_REDIS             FM_ID_MENU_FILE_NEW_CONNECTION_REDIS + 10000
#define FM_ID_TOOLBAR_NEW_CONNECTION_LEVELDB           FM_ID_MENU_FILE_NEW_CONNECTION_LEVELDB + 10000
#define FM_ID_TOOLBAR_NEW_CONNECTION_MONGO             FM_ID_MENU_FILE_NEW_CONNECTION_MONGO + 10000
#define FM_ID_TOOLBAR_NEW_CONNECTION_MYSQL             FM_ID_MENU_FILE_NEW_CONNECTION_MYSQL + 10000
#define FM_ID_TOOLBAR_NEW_FIND                         FM_ID_MENU_FILE_NEW_FIND + 10000
#define FM_ID_TOOLBAR_TABLE                            FM_ID_MENU_TOOLS_TABLE + 10000
#define FM_ID_TOOLBAR_KEYS                             FM_ID_MENU_TOOLS_KEYS + 10000
#define FM_ID_TOOLBAR_USERS                            FM_ID_MENU_TOOLS_USERS + 10000
#define FM_ID_TOOLBAR_BACKUP                           FM_ID_MENU_TOOLS_BACKUP + 10000
#define FM_ID_TOOLBAR_MODELS                           FM_ID_MENU_TOOLS_MODELS + 10000
#define FM_ID_TOOLBAR_ABOUT                            FM_ID_MENU_HELP_ABOUT + 10000
#define FM_ID_TOOLBAR_LANGUAGE                         FM_ID_MENU_HELP_LANGUAGE + 10000
#define FM_ID_TOOLBAR_LANGUAGE_ZH_CN                   FM_ID_MENU_HELP_LANGUAGE_ZH_CN + 10000
#define FM_ID_TOOLBAR_LANGUAGE_EN_US                   FM_ID_MENU_HELP_LANGUAGE_EN_US + 10000


#endif /* RES_H */
