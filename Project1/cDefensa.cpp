#include "Headers.h"

eTipoDefensa cDefensa::get_tipoDefensa()
{
	return tipo;
}

void cDefensa::set_tipoDefensa(eTipoDefensa Tipo)
{
	this->tipo = Tipo;
}

cDefensa::cDefensa()
{
	this->tipo = getRandomTipoDefensa();
}

cDefensa::cDefensa(int Danio, eTipoDefensa Tipo)
{
	this->danio = Danio;
	this->tipo = Tipo;
}

cDefensa::~cDefensa()
{
}
