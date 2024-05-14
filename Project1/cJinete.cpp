#include"Headers.h"

void cJinete::Incorporar_Dragon(cDragon* dragon_n)
{
	this->dragones.push_back(dragon_n);
}

//get de la lista de dragones

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

string cJinete::get_caracteristicas_fisicas()
{
	return caracteristicas_fisicas;
}

enum cJinete::get_resultado() 
{
	return resultado;
}

cJinete::cJinete()
{
	nombre = "";
	apellido = "";
	fecha_nacimiento = 0;
	caracteristicas_fisicas = "";
	resultado = No_asistio;
	this->dragones = NULL;  
}

cJinete::cJinete(string Nombre, string Apellido, string Apodo, int Fecha_Nacimiento, string Caracteristicas_Fisicas, enum Resultado)
{
	nombre = Nombre;
	apellido = Apellido;
	fecha_nacimiento = Fecha_Nacimiento;
	caracteristicas_fisicas = Caracteristicas_Fisicas;
	resultado = No_asistio;
	this->dragones = NULL;  
}

cJinete::~cJinete()
{
}
