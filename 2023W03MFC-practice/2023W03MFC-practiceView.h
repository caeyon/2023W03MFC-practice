
// 2023W03MFC-practiceView.h: CMy2023W03MFCpracticeView 클래스의 인터페이스
//

#pragma once


class CMy2023W03MFCpracticeView : public CView
{
protected: // serialization에서만 만들어집니다.
	CMy2023W03MFCpracticeView() noexcept;
	DECLARE_DYNCREATE(CMy2023W03MFCpracticeView)

// 특성입니다.
public:
	CMy2023W03MFCpracticeDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMy2023W03MFCpracticeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2023W03MFC-practiceView.cpp의 디버그 버전
inline CMy2023W03MFCpracticeDoc* CMy2023W03MFCpracticeView::GetDocument() const
   { return reinterpret_cast<CMy2023W03MFCpracticeDoc*>(m_pDocument); }
#endif

