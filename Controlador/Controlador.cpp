#include "stdafx.h"  //________________________________________ Controlador.cpp
#include "Controlador.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Controlador app;
	return app.BeginDialog(IDI_Controlador, hInstance);
}

void Controlador::Window_Open(Win::Event& e)
{
}

void Controlador::btCalcular_Click(Win::Event& e)
{
	double presion = tbxPresion.DoubleValue;
	if(presion>100)
	{
		double resultado = presion * .15 ;
		this->tbxAjuste.DoubleValue = resultado;
	}
	else
	{
		double resultado = presion * .20;
		this->tbxAjuste.DoubleValue = resultado;
	}
}

