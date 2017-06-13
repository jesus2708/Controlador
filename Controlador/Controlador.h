#pragma once  //______________________________________ Controlador.h  
#include "Resource.h"
class Controlador: public Win::Dialog
{
public:
	Controlador()
	{
	}
	~Controlador()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxPresion;
	Win::Button btCalcular;
	Win::Label lb2;
	Win::Textbox tbxAjuste;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(14.18167);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.61396);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Controlador";
		lb1.CreateX(NULL, L"Presion", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.34396, 0.82021, 2.40771, 0.60854, hWnd, 1000);
		tbxPresion.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.98979, 0.82021, 2.64583, 0.60854, hWnd, 1001);
		btCalcular.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.90021, 0.74083, 2.83104, 0.68792, hWnd, 1002);
		lb2.CreateX(NULL, L"Valor de ajuste", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.12813, 0.82021, 2.43417, 0.60854, hWnd, 1003);
		tbxAjuste.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 11.87979, 0.82021, 2.11667, 0.60854, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxPresion.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxAjuste.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
