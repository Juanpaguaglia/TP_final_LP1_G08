#include"Headers.h"
#include"cVikingo.h"
#include"cDragon.h"
#pragma once

//eResultado

class cJinete:public cVikingo
{
protected:

	string apodo;
	int edad;
	eResultado resultado;
	list <cDragon*> dragones_montados;

public:

	string enumRtostring();
	void Alta_nombre(cDragon* dragon_n);
	void Incorporar_Dragon(cDragon* dragon_n); //es un set al final de la lista de dragones
	void EliminarDragon(cDragon* dragon_e); //hacer try catch exception
	void Interaccion(cDragon* dragon); //En este caso va a ser entrenarlo
	void entrenamiento_bocon();
	void Domar(cDragon* dragon_d);
	string to_string();

	list <cDragon*> getDragones();//get de la lista de dragones
	string get_apodo();
	int get_edad();
	eResultado get_resultado();
	void set_resultado(eResultado resultado);

	cJinete(string Nombre, string Apellido, string Apodo, int Edad, eCaracteristica Caracteristica);
	~cJinete();

};

