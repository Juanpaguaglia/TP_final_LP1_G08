#include "cDefensa.h"

eTipoDefensa getRandomTipoDefensa()
{
	static random_device rd;
	static mt19937 gen(rd());
	static uniform_int_distribution<> dis(0, 2); // Suponiendo que hay 3 valores en el enum eTipoDefensa

	int randNum = dis(gen);

	switch (randNum)
	{
	case 0:
		return mordida;
	case 1:
		return garrazo;
	case 2:
		return coletazo;
	default:
		return mordida; // Valor por defecto en caso de error
	}
}

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

void cDefensa::Polimorfico_no_desarrollado()
{
}

