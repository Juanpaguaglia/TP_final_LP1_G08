#include "cDefensa.h"

eTipoDefensa cDefensa::get_tipoDefensa()
{
	return tipo;
}

void cDefensa::set_tipoDefensa(eTipoDefensa Tipo)
{
	this->tipo = Tipo;
}

string cDefensa::to_stringDef()
{
	stringstream aux;
	aux << "Se defiende con un/una" << tipo << "y hace" << danio << "daño.";
	return aux.str();
}

cDefensa::cDefensa():cAtaque()
{
	this->tipo = getRandomTipoDefensa();
}

cDefensa::cDefensa(eTipoDefensa Tipo) : cAtaque()
{
	this->tipo = Tipo;
}

cDefensa::~cDefensa()
{
}
