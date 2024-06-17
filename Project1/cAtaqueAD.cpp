#include "cAtaqueAD.h"

eTipoAD cAtaqueAD::get_tipoAD()
{
	return tipoAD;
}

void cAtaqueAD::set_tipoAD(int danio, eTipoAD tipoad):cAtaque(danio)
{
	this->tipoAD = tipoad;
}

cAtaqueAD::cAtaqueAD()
{
	this->tipoAD = llama;
}

cAtaqueAD::~cAtaqueAD()
{
}
