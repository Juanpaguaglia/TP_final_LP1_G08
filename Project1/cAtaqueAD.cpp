#include"cAtaqueAD.h"

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

cAtaqueAD::cAtaqueAD(): cAtaque()
{
	this->tipoAD = getRandomTipoAD();// Inicialización con valor aleatorio
}

cAtaqueAD::cAtaqueAD(eTipoAD TipoAD) : cAtaque(), tipoAD(TipoAD)
{
}

cAtaqueAD::~cAtaqueAD()
{
};