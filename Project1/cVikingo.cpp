#include "cVikingo.h"
#include <iostream>

std::string cVikingo::Trabajar()
{
	return posicion;
}

bool cVikingo::Dragones_terminados(cDragon* dragon_m)
{
	return false;
}

void cVikingo::Atacardragones()
{
	std::cout << "Preparense para una incursión en el territorio de los dragones";
}

std::string cVikingo::get_nombre()
{
	return nombre;
}

std::string cVikingo::get_apellido()
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

cVikingo::cVikingo()
{
	nombre = "";
	apellido = "";
	posicion = "";
	dragones_matados = 0;
}

cVikingo::cVikingo(std::string Nombre, std::string Apellido, std::string Posicion)
{
	nombre = Nombre;
	apellido = Apellido;
	posicion = Posicion;
}

cVikingo::~cVikingo()
{
}
