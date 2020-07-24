
//STemWin功能模块管理

#ifndef GUICONF_H
#define GUICONF_H


#ifdef __cplusplus
extern "C" {
#endif


#define GUI_USE_ARGB 1

#define GUI_NUM_LAYERS            1     //最大支持1层


#define GUI_OS                    (1)   // 使用操作系统
#define GUI_MAXTASK               (5)   // 最大可调用EMWIN的任务数
#define GUI_SUPPORT_TOUCH         (1)   // 支持触摸

#define GUI_DEFAULT_FONT          &GUI_Font6x8	//默认字体
#define GUI_SUPPORT_MOUSE         (1)    	//支持鼠标
#define GUI_WINSUPPORT            (1)    	//窗口管理
#define GUI_SUPPORT_MEMDEV        (1)    	//存储设备
#define GUI_SUPPORT_DEVICES       (1)    	//使用设备指针

#ifdef __cplusplus
}
#endif

#endif

