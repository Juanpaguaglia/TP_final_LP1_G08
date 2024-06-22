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
	// Inicializaci�n con valor aleatorio
}

cAtaqueAD::cAtaqueAD(int danio, eTipoAD tipoAD): cAtaque(danio), tipoAD(tipoAD)
	// Inicializaci�n con par�metros
{}

cAtaqueAD::~cAtaqueAD()
{
};
