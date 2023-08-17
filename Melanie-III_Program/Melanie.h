// Melanie v3.0d
// by Alejandro Alonso Puig
// October 2006
// www.quarkrobotics.com
//
//
// Melanie.h : main header file for the MELANIE application
//

#if !defined(AFX_MELANIE_H__F4E083A4_6F9E_11D8_B526_DD03F61C585C__INCLUDED_)
#define AFX_MELANIE_H__F4E083A4_6F9E_11D8_B526_DD03F61C585C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMelanieApp:
// See Melanie.cpp for the implementation of this class
//

class CMelanieApp : public CWinApp
{
public:
	CMelanieApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMelanieApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMelanieApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MELANIE_H__F4E083A4_6F9E_11D8_B526_DD03F61C585C__INCLUDED_)
