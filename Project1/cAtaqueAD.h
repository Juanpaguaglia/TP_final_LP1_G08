#include"cAtaque.h"
#pragma once

//eTipoAD

class cAtaqueAD : public cAtaque
{
protected:

	eTipoAD tipoAD;

public:

	eTipoAD get_tipoAD();
	void set_tipoAD(eTipoAD tipoad);
	string to_stringAD();

	cAtaqueAD();
	cAtaqueAD(eTipoAD TipoAD);
	~cAtaqueAD();

	void Polimorfico_no_desarrollado(); // Implementación de la función virtual pura
};

