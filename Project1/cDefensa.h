#include"cAtaque.h"
#pragma once

//eTipoDefensa

class cDefensa : public cAtaque
{
protected:
	eTipoDefensa tipo;

public:
	eTipoDefensa get_tipoDefensa();
	void set_tipoDefensa(eTipoDefensa Tipo);
	string to_stringDef();

	cDefensa();
	cDefensa(eTipoDefensa Tipo); // Constructor con par�metros
	~cDefensa();

	void Polimorfico_no_desarrollado();// Implementaci�n de la funci�n virtual pura
};


