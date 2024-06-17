#include "Headers.h"
#include "cAtaqueCC.h"

eTipoCC cAtaqueCC::get_tipoCC()
{
	return tipoCC;
}

void cAtaqueCC::set_tipoCC(eTipoCC tipocc,int danio):cAtaque(danio)
{
	this->tipoCC = tipocc;
}

cAtaqueCC::cAtaqueCC()
{
	this->tipoCC = mordida;
}

cAtaqueCC::~cAtaqueCC()
{
}
