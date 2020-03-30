
// week3.1View.cpp: Cweek31View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week3.1.h"
#endif

#include "week3.1Doc.h"
#include "week3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek31View

IMPLEMENT_DYNCREATE(Cweek31View, CView)

BEGIN_MESSAGE_MAP(Cweek31View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek31View 构造/析构

Cweek31View::Cweek31View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cweek31View::~Cweek31View()
{
}

BOOL Cweek31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek31View 绘图

void Cweek31View::OnDraw(CDC* /*pDC*/)
{
	Cweek31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek31View 诊断

#ifdef _DEBUG
void Cweek31View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek31Doc* Cweek31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek31Doc)));
	return (Cweek31Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek31View 消息处理程序


void Cweek31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
