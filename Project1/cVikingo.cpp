#include"Headers.h"

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

bool cVikingo::Dragones_terminados()
{
	if (dragones_matados > 1) {
		return true;
	}
	else {
		return false;
	}
}

void cVikingo::Atacar_dragones()
{
	std::cout << "Preparense para una incursión en el territorio de los dragones";
}

void cVikingo::Matar_dragon()
{
	dragones_matados++;
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

int cVikingo::get_dragones_matados()
{
	return dragones_matados;
}

void cVikingo::set_dragones_matados(int n)
{
	dragones_matados + n;
}

cVikingo::cVikingo(string Nombre, string Apellido, ePosicion posicion, eCaracteristica caracteristica)
{
	this->nombre = Nombre;
	this->apellido = Apellido;
	this->posicion = posicion;
	this->caracteristica = caracteristica;
	this->dragones_matados = 0;
}

cVikingo::~cVikingo()
{
}
