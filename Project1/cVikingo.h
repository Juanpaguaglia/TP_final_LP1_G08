#pragma once
#include <string>
#include "cDragon.h"
#include <iostream>
class cVikingo
{
private:

	std::string nombre;
	std::string apellido;
	std::string posicion;
	int dragones_matados;

public:

	std::string Trabajar(); //Funciona como un get posicion
	bool Dragones_terminados(cDragon* dragon_m); //siendo dragon_m el dragon asesinado
	void Atacardragones();
	std::string get_nombre();
	std::string get_apellido();
	int get_dragones_matados();
	void set_dragones_matados(int n);
	cVikingo();
	cVikingo(std::string Nombre, std::string Apellido, std::string Posicion);
	~cVikingo();

};

