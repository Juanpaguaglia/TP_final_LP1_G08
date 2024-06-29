#include"cAtaqueAD.h"
#include"cDefensa.h"
#include"Headers.h"
#pragma once

//eTamanio

//eColor

class cDragon
{
private:

	string nombre;
	eTamanio tamanio;
	eColor color;
	int vida; //Cantidad de vida que empieza en 100
	bool estado; //True si esta domado; False si no lo esta
	bool vivo; //true si esta vivo false si no lo esta
	list<cAtaque*> Fataque;

public:

	bool Domado(); //get estado
	void Baja(); //set vivo, es decir cuando muere el dragon le cambia el atributo
	void AgregarFataque(cAtaque* Fata_nue);

	list<cAtaque*> get_Fataque();
	string get_nombre();
	void set_nombre(string Nombre);
	eTamanio get_tamanio();
	eColor get_color();
	void set_estado(bool Estado);
	int get_vida();
	void set_vida(int Vida);
	bool get_vivo();
	string to_stringD();

	cDragon(string Nombre, eTamanio Tamanio, eColor Color);
	~cDragon();

};

