
// 在客户区显示JPG图像View.cpp: C在客户区显示JPG图像View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "在客户区显示JPG图像.h"
#endif

#include "在客户区显示JPG图像Doc.h"
#include "在客户区显示JPG图像View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C在客户区显示JPG图像View

IMPLEMENT_DYNCREATE(C在客户区显示JPG图像View, CView)

BEGIN_MESSAGE_MAP(C在客户区显示JPG图像View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C在客户区显示JPG图像View::OnFileOpen)
END_MESSAGE_MAP()

// C在客户区显示JPG图像View 构造/析构

C在客户区显示JPG图像View::C在客户区显示JPG图像View() noexcept
{
	// TODO: 在此处添加构造代码

}

C在客户区显示JPG图像View::~C在客户区显示JPG图像View()
{
}

BOOL C在客户区显示JPG图像View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C在客户区显示JPG图像View 绘图

void C在客户区显示JPG图像View::OnDraw(CDC* /*pDC*/)
{
	C在客户区显示JPG图像Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C在客户区显示JPG图像View 诊断

#ifdef _DEBUG
void C在客户区显示JPG图像View::AssertValid() const
{
	CView::AssertValid();
}

void C在客户区显示JPG图像View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C在客户区显示JPG图像Doc* C在客户区显示JPG图像View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C在客户区显示JPG图像Doc)));
	return (C在客户区显示JPG图像Doc*)m_pDocument;
}
#endif //_DEBUG


// C在客户区显示JPG图像View 消息处理程序


void C在客户区显示JPG图像View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC, 0,0,img.GetWidth(),img.GetHeight());
	}
}
