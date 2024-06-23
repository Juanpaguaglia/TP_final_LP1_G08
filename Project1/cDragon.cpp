#include"Headers.h"
#include "cDragon.h"

int cDragon::dragonesCreados = 0;

bool cDragon::Domado()
{
	return estado;

	//bool dom;
	//dom = random_bool();
	//return dom;

	//Para mi la funcion domado devuelve unicamente el valor del atributo 
	// no devuelve uno random entre true y false
}

void cDragon::Baja()
{
	vivo = false;
}

list<cAtaque*> cDragon::get_Fataque()
{
	return Fataque;
}

string cDragon::get_nombre()
{
	return nombre;
}

void cDragon::set_nombre(string Nombre)
{
	this->nombre = Nombre;
}

eTamanio cDragon::get_tamanio()
{
	return tamanio;
}

eColor cDragon::get_color()
{
	return color;
}

void cDragon::set_estado(bool Estado)
{
	estado = Estado;
}

int cDragon::get_vida()
{
	return vida;
}

void cDragon::set_vida(int Vida)
{
	this->vida = Vida;
}

bool cDragon::get_vivo()
{
	return true;
}

cDragon::cDragon(string Nombre, eTamanio Tamanio, eColor Color, bool Estado)
{
	this->nombre = Nombre;
	this->tamanio = Tamanio;
	this->color = Color;
	this->vida = 100;
	this->estado = Estado;
	this->vivo = true;
	this->Fataque = list<cAtaque*>();
}

cDragon::~cDragon()
{
}

