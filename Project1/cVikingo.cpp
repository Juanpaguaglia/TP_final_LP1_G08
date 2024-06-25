#include"cVikingo.h"

void cVikingo::Trabajar()
{
	if (caracteristica == grandote)
		set_posicion(constructor);
	if (caracteristica == religioso)
		set_posicion(sacerdote);
	if (caracteristica == creativo)
		set_posicion(artesano);
	else
		set_posicion(comerciante);
}

ePosicion cVikingo::get_posicion()
{
	return posicion;
}

void cVikingo::set_posicion(ePosicion pos)
{
	this->posicion = pos;
}

string cVikingo::get_nombre()
{
	return nombre;
}

eCaracteristica cVikingo::get_caracteristica()
{
	return caracteristica;
}

string cVikingo::get_apellido()
{
	return apellido;
}

cVikingo::cVikingo()
{
	this->nombre = "";
	this->apellido = "";
	this->caracteristica = grandote;
	Trabajar();//this->posicion
}

cVikingo::cVikingo(string Nombre, string Apellido, eCaracteristica Caracteristica) : nombre(Nombre), apellido(Apellido)
{
	this->caracteristica = Caracteristica;
	Trabajar();
}

cVikingo::~cVikingo()
{
}
