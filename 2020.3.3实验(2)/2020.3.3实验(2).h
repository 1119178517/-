
// 2020.3.3实验(2).h: 2020.3.3实验(2) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// CMy202033实验2App:
// 有关此类的实现，请参阅 2020.3.3实验(2).cpp
//

class CMy202033实验2App : public CWinApp
{
public:
	CMy202033实验2App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy202033实验2App theApp;
