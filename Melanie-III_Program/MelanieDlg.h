// Melanie v3.0d
// by Alejandro Alonso Puig
// October 2006
// www.quarkrobotics.com
//
//
// MelanieDlg.h : header file
//

#if !defined(AFX_MELANIEDLG_H__F4E083A6_6F9E_11D8_B526_DD03F61C585C__INCLUDED_)
#define AFX_MELANIEDLG_H__F4E083A6_6F9E_11D8_B526_DD03F61C585C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "serialport.h"			//Use Serial Port Libraries
#include "MATH.H"


/////////////////////////////////////////////////////////////////////////////
// CMelanieDlg dialog

class CMelanieDlg : public CDialog
{
// Construction
private:
	void DecToHex(int DecNumber, char *Hex);
	void SendCommand (CString sCommand);
		 CSerialPort RS232C_radio_port;
		 CSerialPort I2C_radio_port;		//radio transceiver
public:
	BOOL btemp;
	BOOL NoContact[8];	//Used to check legs contact on the floor (index 8 needed)
	void ReadDPort(BYTE I2CAdd,BOOL Result[8]);
	void ModeDPort(BYTE I2CAdd, BYTE cValue);
	void I2CFatalError();
	void ChkPreassure(int iLeg=6);
	void ForceRS232CradioportSend();
	unsigned char	cPacket[96];	//Packet to send via RS232C_Transceiver
	char			cPacketIdx;		//Index
	CPen	n_pen; 
	CPen*	v_pen; 
	CBrush	n_brush;
	CBrush*	v_brush;
	DWORD dwColor[9];

	int Voltage[2];
	void GetActualCoords(double dcoord[3][2][6], int iSelect=-1);
	void ChkPos(unsigned char cPos[20], unsigned char cAD[20]);
	unsigned char Current[6];
	unsigned char Preassure[6][2];
	void ChkCurr();
	void OffOnRelay();
	BOOL MoveLeg(double dcoord[3][2][6], int iMode,int iPau, int dIncDef, double yHigh, int iLeg1, int iLeg2=-1, int iLeg3=-1, int iLeg4=-1, int iLeg5=-1, int iLeg6=-1 );
	CString cServo[20];
	double cConvPosToDeg(char cServo, unsigned char cPos);
	unsigned char cConvDegToPos(char cServo, double Deg);
	unsigned char cPosConv[20][2];
	int InvKinematic (double value[2][3], double result[3]);
	int FwdKinematic (double value[2][3], double result[3]);
	void SetDPort(BYTE I2CAdd, BYTE cValue);
	unsigned char cPortVal;
	void UpdateSliders();
	void DeactivateServo(CString cServ);
	void RunPreset (CString FileName);
	unsigned char cSpeed (unsigned char cServo);
	char cHex[3];
	CMelanieDlg(CWnd* pParent = NULL);	// standard constructor
	~CMelanieDlg();

// Dialog Data
	//{{AFX_DATA(CMelanieDlg)
	enum { IDD = IDD_MELANIE_DIALOG };
	int		m_SliderServo01;
	int		m_SliderServo02;
	int		m_SliderServo03;
	int		m_SliderServo04;
	int		m_SliderServo05;
	int		m_SliderServo06;
	int		m_SliderServo07;
	int		m_SliderServo08;
	int		m_SliderServo09;
	int		m_SliderServo10;
	int		m_SliderServo11;
	int		m_SliderServo12;
	int		m_SliderServo13;
	int		m_SliderServo14;
	int		m_SliderServo15;
	int		m_SliderServo16;
	int		m_SliderServo17;
	int		m_SliderServo18;
	int		m_SliderServo19;
	int		m_ad01;
	int		m_ad02;
	int		m_ad03;
	int		m_ad04;
	int		m_ad05;
	int		m_ad06;
	int		m_ad07;
	int		m_ad08;
	int		m_ad09;
	int		m_ad11;
	int		m_ad12;
	int		m_ad13;
	int		m_ad14;
	int		m_ad15;
	int		m_ad16;
	int		m_ad17;
	int		m_ad18;
	int		m_ad19;
	int		m_pos01;
	int		m_pos02;
	int		m_pos03;
	int		m_pos04;
	int		m_pos05;
	int		m_pos06;
	int		m_pos07;
	int		m_pos08;
	int		m_pos09;
	int		m_pos10;
	int		m_pos11;
	int		m_pos12;
	int		m_pos13;
	int		m_pos14;
	int		m_pos15;
	int		m_pos16;
	int		m_pos17;
	int		m_pos18;
	int		m_pos19;
	BYTE	m_pause;
	CString	m_seqname;
	BOOL	m_switch;
	BOOL	m_servo1;
	BOOL	m_servo10;
	BOOL	m_servo11;
	BOOL	m_servo12;
	BOOL	m_servo13;
	BOOL	m_servo14;
	BOOL	m_servo15;
	BOOL	m_servo16;
	BOOL	m_servo17;
	BOOL	m_servo18;
	BOOL	m_servo19;
	BOOL	m_servo2;
	BOOL	m_servo3;
	BOOL	m_servo4;
	BOOL	m_servo5;
	BOOL	m_servo6;
	BOOL	m_servo7;
	BOOL	m_servo8;
	BOOL	m_servo9;
	BOOL	m_wave1;
	BOOL	m_wave2;
	BOOL	m_ObstaclesChk;
	BYTE	m_Sensit1;
	BYTE	m_Sensit2;
	BYTE	m_Sensit3;
	BYTE	m_Sensit4;
	BYTE	m_Sensit5;
	BYTE	m_Sensit6;
	BYTE	m_steps;
	BYTE	m_curr13;
	BYTE	m_curr06;
	BYTE	m_curr09;
	BYTE	m_curr16;
	BYTE	m_curr03;
	BYTE	m_curr19;
	float	m_voltpow;
	float	m_voltlog;
	DWORD	m_t1;
	DWORD	m_t2;
	DWORD	m_t3;
	BOOL	m_LegContact1;
	BOOL	m_LegContact2;
	BOOL	m_LegContact3;
	BOOL	m_LegContact4;
	BOOL	m_LegContact5;
	BOOL	m_LegContact6;
	BOOL	m_ObstaclesChk2;
	BOOL	m_sensing;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMelanieDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

private:

	//Structure for the sequence of positions of the robot
	struct	stPosition							//Define Position of Robot
	{
		unsigned char		cServoPos[21],		//Define position of up to 20 servos
							cPause;				//Pause after this position
		struct stPosition	*nextpos,			//Used for linked list
							*prevpos;

	};
	struct	stPosition	*pstFirstPos,			//First global position
						*pstActualPos,			//Actual global position
						*pstPrevPos;


// Implementation
protected:
	void LoadSequence(CString FileName);
	void CreateSequence();
	int temp;
	void SetGlobalPos();
	void SetServoPos (CString cServo, int iPosition, int iSpeed);
	void ActivateServo(CString cServo, unsigned char cPos);
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMelanieDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnAD();
	afx_msg void OnCustomdrawSliderservo01(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo02(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo03(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo04(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo05(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo06(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo07(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo08(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo09(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo10(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo11(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo12(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo13(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo14(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo15(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo16(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo17(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo18(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderservo19(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSavepos();
	afx_msg void OnSaveseq();
	afx_msg void OnTopback();
	afx_msg void OnTopforward();
	afx_msg void OnStepforward();
	afx_msg void OnAllforward();
	afx_msg void OnClearseq();
	afx_msg void OnStepback();
	afx_msg void OnAllback();
	afx_msg void OnLoadseq();
	afx_msg void OnLoadOverSeq();
	afx_msg void OnSwitch();
	afx_msg void OnSaveinvseq();
	afx_msg void OnPreset1();
	afx_msg void OnPreset2();
	afx_msg void OnPreset6();
	afx_msg void OnPreset3();
	afx_msg void OnPreset10();
	afx_msg void OnPreset4();
	afx_msg void OnPreset8();
	afx_msg void OnPreset9();
	afx_msg void OnPreset7();
	afx_msg void OnPreset11();
	afx_msg void OnPresetset1();
	afx_msg void OnPreset12();
	afx_msg void OnPresetset2();
	afx_msg void OnPreset13();
	afx_msg void OnServo1();
	afx_msg void OnServo2();
	afx_msg void OnServo3();
	afx_msg void OnServo10();
	afx_msg void OnServo11();
	afx_msg void OnServo12();
	afx_msg void OnServo13();
	afx_msg void OnServo14();
	afx_msg void OnServo15();
	afx_msg void OnServo16();
	afx_msg void OnServo17();
	afx_msg void OnServo18();
	afx_msg void OnServo19();
	afx_msg void OnServo4();
	afx_msg void OnServo5();
	afx_msg void OnServo6();
	afx_msg void OnServo7();
	afx_msg void OnServo8();
	afx_msg void OnServo9();
	afx_msg void OnChkCurr();
	afx_msg void OnAllServosOn();
	afx_msg void OnAllServosOff();
	afx_msg void OnWaveUp();
	afx_msg void OnWaveFwd();
	afx_msg void OnWaveDown();
	afx_msg void OnChkBattStatus();
	afx_msg void OnWavePreset();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTest();
	afx_msg void OnTest2();
	afx_msg void OnTest3();
	afx_msg void OnSensing();
	afx_msg void OnPreset5();
	afx_msg void OnWalk();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MELANIEDLG_H__F4E083A6_6F9E_11D8_B526_DD03F61C585C__INCLUDED_)
