
// 2020.3.3实验(2)View.cpp: CMy202033实验2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.3.3实验(2).h"
#endif

#include "2020.3.3实验(2)Doc.h"
#include "2020.3.3实验(2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy202033实验2View

IMPLEMENT_DYNCREATE(CMy202033实验2View, CView)

BEGIN_MESSAGE_MAP(CMy202033实验2View, CView)
END_MESSAGE_MAP()

// CMy202033实验2View 构造/析构

CMy202033实验2View::CMy202033实验2View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMy202033实验2View::~CMy202033实验2View()
{
}

BOOL CMy202033实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy202033实验2View 绘图

void CMy202033实验2View::OnDraw(CDC* /*pDC*/)
{
	CMy202033实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy202033实验2View 诊断

#ifdef _DEBUG
void CMy202033实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy202033实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy202033实验2Doc* CMy202033实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy202033实验2Doc)));
	return (CMy202033实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy202033实验2View 消息处理程序
