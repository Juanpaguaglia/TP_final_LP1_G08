#include "Headers.h"

eTipoAD cAtaqueAD::get_tipoAD()
{
	return tipoAD;
}

void cAtaqueAD::set_tipoAD(eTipoAD tipoad)
{
	this->tipoAD = tipoad;
}

cAtaqueAD::cAtaqueAD(): cAtaque(), tipoAD(getRandomTipoAD()) 
{
	// Inicialización con valor aleatorio
}

cAtaqueAD::cAtaqueAD(int danio, eTipoAD tipoAD): cAtaque(danio), tipoAD(tipoAD)
	// Inicialización con parámetros
{}

cAtaqueAD::~cAtaqueAD()
{
};
