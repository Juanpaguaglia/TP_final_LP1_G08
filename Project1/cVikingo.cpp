#include"Headers.h"

string cVikingo::Trabajar()
{
	return posicion;
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

string cVikingo::get_nombre()
{
	return nombre;
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

cVikingo::cVikingo()
{
	nombre = "";
	apellido = "";
	posicion = "";
	dragones_matados = 0;
}

cVikingo::cVikingo(string Nombre, string Apellido, string Posicion)
{
	nombre = Nombre;
	apellido = Apellido;
	posicion = Posicion;
}

cVikingo::~cVikingo()
{
}
