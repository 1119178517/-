
// week2.4.h: week2.4 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// Cweek24App:
// 有关此类的实现，请参阅 week2.4.cpp
//

class Cweek24App : public CWinApp
{
public:
	Cweek24App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek24App theApp;
