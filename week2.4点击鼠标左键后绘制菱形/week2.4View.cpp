
// week2.4View.cpp: Cweek24View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2.4.h"
#endif

#include "week2.4Doc.h"
#include "week2.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek24View

IMPLEMENT_DYNCREATE(Cweek24View, CView)

BEGIN_MESSAGE_MAP(Cweek24View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek24View 构造/析构

Cweek24View::Cweek24View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cweek24View::~Cweek24View()
{
}

BOOL Cweek24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek24View 绘图

void Cweek24View::OnDraw(CDC* /*pDC*/)
{
	Cweek24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek24View 诊断

#ifdef _DEBUG
void Cweek24View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek24Doc* Cweek24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek24Doc)));
	return (Cweek24Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek24View 消息处理程序


void Cweek24View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);             //定义一个CClientDC的对象dc
	CRect rc;                       //定义一个描述矩形的对象rc
	GetClientRect(&rc);             //获得用户区的尺寸，并存入rc
	                                //以下是绘制菱形的代码

	dc.MoveTo(0, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2,0);
	dc.LineTo(rc.right, (rc.bottom + rc.top) / 2);
	dc.LineTo((rc.right + rc.left) / 2, rc.bottom);
	dc.LineTo(0, (rc.bottom + rc.top) / 2);
	CView::OnLButtonDown(nFlags, point);

	
}
