
// 确保窗口重绘后所画矩形能够显示View.cpp: C确保窗口重绘后所画矩形能够显示View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "确保窗口重绘后所画矩形能够显示.h"
#endif

#include "确保窗口重绘后所画矩形能够显示Doc.h"
#include "确保窗口重绘后所画矩形能够显示View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C确保窗口重绘后所画矩形能够显示View

IMPLEMENT_DYNCREATE(C确保窗口重绘后所画矩形能够显示View, CView)

BEGIN_MESSAGE_MAP(C确保窗口重绘后所画矩形能够显示View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C确保窗口重绘后所画矩形能够显示View 构造/析构

C确保窗口重绘后所画矩形能够显示View::C确保窗口重绘后所画矩形能够显示View() noexcept
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);  //初始化

}

C确保窗口重绘后所画矩形能够显示View::~C确保窗口重绘后所画矩形能够显示View()
{
}

BOOL C确保窗口重绘后所画矩形能够显示View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C确保窗口重绘后所画矩形能够显示View 绘图

void C确保窗口重绘后所画矩形能够显示View::OnDraw(CDC* pDC)
{
	C确保窗口重绘后所画矩形能够显示Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Rectangle(ca.GetAt(i));

}


// C确保窗口重绘后所画矩形能够显示View 诊断

#ifdef _DEBUG
void C确保窗口重绘后所画矩形能够显示View::AssertValid() const
{
	CView::AssertValid();
}

void C确保窗口重绘后所画矩形能够显示View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C确保窗口重绘后所画矩形能够显示Doc* C确保窗口重绘后所画矩形能够显示View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C确保窗口重绘后所画矩形能够显示Doc)));
	return (C确保窗口重绘后所画矩形能够显示Doc*)m_pDocument;
}
#endif //_DEBUG


// C确保窗口重绘后所画矩形能够显示View 消息处理程序


void C确保窗口重绘后所画矩形能够显示View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 50 + 5;
	CRect cr(point.x-r,point.y-r,point.x+r,point.y+r);
	ca.Add(cr);
	this->Invalidate();//强制重绘

	//CClientDC dc(this);
	//dc.Rectangle(cr);
	
	CView::OnLButtonDown(nFlags, point);
}
