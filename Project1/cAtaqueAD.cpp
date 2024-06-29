#include"cAtaqueAD.h"

eTipoAD getRandomTipoAD() 
{
	static random_device rd;
	static mt19937 gen(rd());
	static uniform_int_distribution<> dis(0, 2);

	// esto devuelve este numero entero pero convertido a eTipoAD mediante el static_cast.
	return static_cast<eTipoAD>(dis(gen));
}

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
}

void cAtaqueAD::Polimorfico_no_desarrollado()
{
}
