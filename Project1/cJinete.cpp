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

string cJinete::get_fecha_nacimiento() 
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

cJinete::cJinete()
{
	this->nombre = "Ragnar";
	this->apellido = "Lodbrok";
	this->apodo = "Titan";
	this->fecha_nacimiento = "11-10-995";
	this->caracteristicas_fisicas = "Caracteristicas_Fisicas"; //cambiar a enum
	this->resultado = No_asistio;
}

//Creo que est� bien pero a revisar --> Lista de inicializacion para la "list dragones" �se hace asi el constructor en este caso?
cJinete::cJinete(string Nombre, string Apellido, string Apodo, string Fecha_Nacimiento, string Caracteristicas_Fisicas, eresultado Resultado, list <cDragon*> dragones):dragones(dragones)
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
