
// 确保窗口重绘后所画矩形能够显示View.h: C确保窗口重绘后所画矩形能够显示View 类的接口
//

#pragma once


class C确保窗口重绘后所画矩形能够显示View : public CView
{
protected: // 仅从序列化创建
	C确保窗口重绘后所画矩形能够显示View() noexcept;
	DECLARE_DYNCREATE(C确保窗口重绘后所画矩形能够显示View)

// 特性
public:
	C确保窗口重绘后所画矩形能够显示Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> ca;    //数组

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C确保窗口重绘后所画矩形能够显示View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 确保窗口重绘后所画矩形能够显示View.cpp 中的调试版本
inline C确保窗口重绘后所画矩形能够显示Doc* C确保窗口重绘后所画矩形能够显示View::GetDocument() const
   { return reinterpret_cast<C确保窗口重绘后所画矩形能够显示Doc*>(m_pDocument); }
#endif

