
// weeks7View.cpp: Cweeks7View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "weeks7.h"
#endif

#include "weeks7Doc.h"
#include "weeks7View.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// Cweeks7View

IMPLEMENT_DYNCREATE(Cweeks7View, CView)

BEGIN_MESSAGE_MAP(Cweeks7View, CView)
	ON_COMMAND(ID_32771, &Cweeks7View::On32771)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_SHOWHIDE, &Cweeks7View::OnShowhide)
END_MESSAGE_MAP()

// Cweeks7View 构造/析构

Cweeks7View::Cweeks7View() noexcept
{
	// TODO: 在此处添加构造代码
	show_hide = 1;
	pD = NULL;

}

Cweeks7View::~Cweeks7View()
{
}

BOOL Cweeks7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweeks7View 绘图

void Cweeks7View::OnDraw(CDC* /*pDC*/)
{
	Cweeks7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweeks7View 诊断

#ifdef _DEBUG
void Cweeks7View::AssertValid() const
{
	CView::AssertValid();
}

void Cweeks7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweeks7Doc* Cweeks7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweeks7Doc)));
	return (Cweeks7Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweeks7View 消息处理程序


void Cweeks7View::On32771()
{
	// TODO: 在此添加命令处理程序代码

	MyDlg0 dlg;
	int t = dlg.DoModal();
	
	if (t == IDOK)
	{
		int R, X, Y;
		R = dlg.r;
		X = dlg.x;
		Y = dlg.y;
		CRect re(X-R,Y-R,X+R,Y+R);
		GetDC()->Ellipse(re);
	}

}


void Cweeks7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	pD=new MyDlg0;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDown(nFlags, point);
}


void Cweeks7View::OnShowhide()
{
	// TODO: 在此添加命令处理程序代码
	if (show_hide == 1)
		show_hide = 0;
	else
		show_hide = 1;
	pD->ShowWindow(show_hide);

}
