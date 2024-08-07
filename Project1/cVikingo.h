#include"Headers.h"
#include "cDragon.h"
#pragma once

//eCaracteristica

//ePosicion

class cVikingo //clase base de jinete y guerrero
{
protected:

	string nombre;
	string apellido;
	ePosicion posicion;
	eCaracteristica caracteristica;

public:
	
	void Trabajar(); //Dependiendo como es el vikingo le asigna una posicion
	virtual void Interaccion(cDragon* dragon) = 0;
	
	string enumPtostring();
	string enumCtostring();
	ePosicion get_posicion();
	void set_posicion(ePosicion pos);
	string get_nombre();
	eCaracteristica get_caracteristica();
	string get_apellido();

	cVikingo();
	cVikingo(string Nombre, string Apellido, eCaracteristica Caracteristica);
	virtual ~cVikingo();

};

