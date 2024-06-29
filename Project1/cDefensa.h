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
	cDefensa(eTipoDefensa Tipo); // Constructor con parámetros
	~cDefensa();

	void Polimorfico_no_desarrollado();// Implementación de la función virtual pura
};


