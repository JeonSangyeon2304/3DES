
// 3DESDlg.h: 헤더 파일
//

#pragma once


// CMy3DESDlg 대화 상자
class CMy3DESDlg : public CDialogEx
{
// 생성입니다.
public:
	CMy3DESDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY3DES_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit cPath;
	CString cPasswd;
	afx_msg void OnOpenFile();
	afx_msg void OnEncrypt();
	afx_msg void OnDecrypt();

	CString in_file;
	CString out_file;
};
