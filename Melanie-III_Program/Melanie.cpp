// Melanie v3.0d
// by Alejandro Alonso Puig
// October 2006
// www.quarkrobotics.com
//
//
// Melanie.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Melanie.h"
#include "MelanieDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMelanieApp

BEGIN_MESSAGE_MAP(CMelanieApp, CWinApp)
	//{{AFX_MSG_MAP(CMelanieApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMelanieApp construction

CMelanieApp::CMelanieApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CMelanieApp object

CMelanieApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CMelanieApp initialization

BOOL CMelanieApp::InitInstance()
{
	// Standard initialization

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif


	CMelanieDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
