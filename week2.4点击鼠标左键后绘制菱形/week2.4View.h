
// week2.4View.h: Cweek24View 类的接口
//

#pragma once


class Cweek24View : public CView
{
protected: // 仅从序列化创建
	Cweek24View() noexcept;
	DECLARE_DYNCREATE(Cweek24View)

// 特性
public:
	Cweek24Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek24View();
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

#ifndef _DEBUG  // week2.4View.cpp 中的调试版本
inline Cweek24Doc* Cweek24View::GetDocument() const
   { return reinterpret_cast<Cweek24Doc*>(m_pDocument); }
#endif

