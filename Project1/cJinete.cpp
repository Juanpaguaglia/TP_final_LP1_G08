#include "cJinete.h"
using namespace std;


void cJinete::Incorporar_Dragon(cDragon* dragon_n)
{
	this->dragones.push_back(dragon_n);
}

string cJinete::get_nombre()
{
	return nombre;
}

string cJinete::get_apellido()
{
	return apellido;
}

string cJinete::get_apodo()
{
	return apodo;
}

int cJinete::get_fecha_nacimiento() 
{
	return fecha_nacimiento;
}

cJinete::cJinete()
{
	nombre = "";
	apellido = "";
	fecha_nacimiento = 0;
	caracteristicas_fisicas = "";
	//como inicializo un enum
	// this->dragones = NULL;  (tira un error con el igual)
}

cJinete::cJinete(string Nombre, string Apellido, string Apodo, int Fecha_Nacimiento, string Caracteristicas_Fisicas, enum Resultado)
{
	nombre = Nombre;
	apellido = Apellido;
	fecha_nacimiento = Fecha_Nacimiento;
	caracteristicas_fisicas = Caracteristicas_Fisicas;
	//como inicializo un enum
	// this->dragones = NULL;  (tira un error con el igual)
}

cJinete::~cJinete()
{
}
