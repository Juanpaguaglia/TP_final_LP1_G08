#pragma once
#include <list> //no funciona bien
#include "cDragon.h"
#include <fstream>
#include <string>


class cJinete
{
private:

	string nombre;
	string apellido;
	string apodo;
	const int fecha_nacimiento;
	string caracteristicas_fisicas;
	enum resultado
	{
		No_asistio, Aprobado, Desaprobado, Primero, Ultimo;
	};
	list <cDragon*> dragones;

public:

	void Incorporar_Dragon(cDragon* dragon_n); //es un set al final de la lista de dragones
	//falta un get dragon
	string get_nombre();
	string get_apellido();
	string get_apodo();
	int get_fecha_nacimiento()const;
	enum get_resultado();
	cJinete();
	cJinete(string Nombre, string Apellido, string Apodo, const int Fecha_Nacimiento, string Caracteristicas_Fisicas, enum Resultado);
	~cJinete();

};

