
// MFC2.3View.cpp: CMFC23View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2.3.h"
#endif

#include "MFC2.3Doc.h"
#include "MFC2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC23View

IMPLEMENT_DYNCREATE(CMFC23View, CView)

BEGIN_MESSAGE_MAP(CMFC23View, CView)
END_MESSAGE_MAP()

// CMFC23View 构造/析构

CMFC23View::CMFC23View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFC23View::~CMFC23View()
{
}

BOOL CMFC23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC23View 绘图

void CMFC23View::OnDraw(CDC* pDC)
{
	CMFC23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	/*if (!pDoc)
		return;*/
	// TODO: 在此处为本机数据添加绘制代码
	CRect rect(30, 30, 300, 300);
	pDC->Rectangle(&rect);
}


// CMFC23View 诊断

#ifdef _DEBUG
void CMFC23View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC23Doc* CMFC23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC23Doc)));
	return (CMFC23Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC23View 消息处理程序
