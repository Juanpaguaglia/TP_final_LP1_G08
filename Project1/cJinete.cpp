#include"Headers.h"

void cJinete::Incorporar_Dragon(cDragon* dragon_n)
{
	this->dragones.push_back(dragon_n);
}

list<cDragon*> cJinete::getDragones()
{
	return dragones;
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

string cJinete::get_caracteristicas_fisicas()
{
	return caracteristicas_fisicas;
}

eresultado cJinete::get_resultado()const 
{
	return resultado;
}

//Creo que está bien pero a revisar --> Lista de inicializacion para la "list dragones" ¿se hace asi el constructor en este caso?
cJinete::cJinete(string Nombre, string Apellido, string Apodo, int Fecha_Nacimiento, string Caracteristicas_Fisicas, eresultado Resultado, list <cDragon*> dragones):dragones(dragones)
{
	this->nombre = Nombre;
	this->apellido = Apellido;
	this->apodo = Apodo;
	this->fecha_nacimiento = Fecha_Nacimiento;
	this->caracteristicas_fisicas = Caracteristicas_Fisicas;
	this->resultado = No_asistio;
}

cJinete::~cJinete()
{
}
