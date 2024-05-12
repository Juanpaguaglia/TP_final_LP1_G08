#include "cJinete.h"
using namespace std;

void Incorporar_Dragon(cDragon* dragon_n)
{
	this->dragones.push_back(dragon_n);
}

//;

string get_nombre()
{
	return nombre;
}

string get_apellido()
{
	return apellido;
}

string get_apodo()
{
	return apodo;
}

int get_fecha_nacimiento() const
{
	return fecha_nacimiento;
}

enum get_resultado()
{
	return resultado;
}

cjinete()
{
	nombre = "";
	apellido = "";
	apodo = "";
	//const int fecha_naciemiento
	caracteristicas_fisicas = "";
	//inicializar en el enum resultado
	this->dragones = NULL;
}

cJinete(string Nombre, string Apellido, string Apodo, const int Fecha_Nacimiento, string Caracteristicas_Fisicas, enum Resultado)
string nombre = Nombre;
string apellido = Apellido;
string apodo = Apodo;
//const int fecha_naciemiento como hacer en constructor
string caracteristicas_fisicas = Caracteristicas_fisicas;
enum resultado = Resultado;
this->dragones = NULL;
}

~cJinete()
{
}


