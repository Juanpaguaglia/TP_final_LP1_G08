#include "Headers.h"

eTipoAD cAtaqueAD::get_tipoAD()
{
	return tipoAD;
}

void cAtaqueAD::set_tipoAD(eTipoAD tipoad)
{
	this->tipoAD = tipoad;
}

string cAtaqueAD::to_stringAD()
{
	stringstream aux;
	aux << "Ataca con" << tipoAD << "y hace" << danio << "daño.";
	return aux.str();
}

cAtaqueAD::cAtaqueAD(): cAtaque(), tipoAD(getRandomTipoAD()) 
{
	// Inicialización con valor aleatorio
}

cAtaqueAD::cAtaqueAD(int Danio, eTipoAD TipoAD) : cAtaque(danio), tipoAD(TipoAD)
{
}

cAtaqueAD::~cAtaqueAD()
{
};