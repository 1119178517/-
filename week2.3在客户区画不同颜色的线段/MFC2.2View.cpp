
// MFC2.2View.cpp: CMFC22View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2.2.h"
#endif

#include "MFC2.2Doc.h"
#include "MFC2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC22View

IMPLEMENT_DYNCREATE(CMFC22View, CView)

BEGIN_MESSAGE_MAP(CMFC22View, CView)
END_MESSAGE_MAP()

// CMFC22View 构造/析构

CMFC22View::CMFC22View() noexcept
{
	// TODO: 在此处添加构造代码

}

CMFC22View::~CMFC22View()
{
}

BOOL CMFC22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC22View 绘图

void CMFC22View::OnDraw(CDC* pDC)
{
	CMFC22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: 在此处为本机数据添加绘制代码
	/*if (!pDoc)
		return;*/
	int red = 0, green = 0, blue = 0;
	int width = 2;
	int row = 20;
	for (int s = 0; s < 8; s++)
	{
		int color = RGB(red, green, blue);
		CPen newPen(PS_SOLID, width, color);
		CPen*oldPen = pDC->SelectObject(&newPen);
		pDC->MoveTo(20, row);
		pDC->LineTo(300, row);
		pDC->SelectObject(oldPen);
		red += 32;
		green += 16;
		blue += 8;
		width += 2;
		row += 30;
	}

	
}


// CMFC22View 诊断

#ifdef _DEBUG
void CMFC22View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC22Doc* CMFC22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC22Doc)));
	return (CMFC22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC22View 消息处理程序
