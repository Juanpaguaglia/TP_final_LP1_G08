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
	aux << "Ataca con" << tipoAD << "y hace" << danio << "da�o.";
	return aux.str();
}

cAtaqueAD::cAtaqueAD(): cAtaque()
{
	this->tipoAD = getRandomTipoAD();// Inicializaci�n con valor aleatorio
}

cAtaqueAD::cAtaqueAD(eTipoAD TipoAD) : cAtaque(), tipoAD(TipoAD)
{
}

cAtaqueAD::~cAtaqueAD()
{
};