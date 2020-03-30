
// 确保窗口重绘后所画矩形能够显示.h: 确保窗口重绘后所画矩形能够显示 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// C确保窗口重绘后所画矩形能够显示App:
// 有关此类的实现，请参阅 确保窗口重绘后所画矩形能够显示.cpp
//

class C确保窗口重绘后所画矩形能够显示App : public CWinApp
{
public:
	C确保窗口重绘后所画矩形能够显示App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C确保窗口重绘后所画矩形能够显示App theApp;
