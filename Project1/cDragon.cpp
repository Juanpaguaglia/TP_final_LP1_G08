#include"Headers.h"

int cDragon::dragonesCreados = 0;

void cDragon::Alta_nombre(string Nombre)
{
	nombre = Nombre;
}

bool cDragon::Domado()
{
	return estado;
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

bool cDragon::get_vivo()
{
	return true;
}

cDragon::cDragon()
{
	this->nombre = "Furia Nocturna";
	this->tamanio = mediano;
	this->color = negro;
	this->estado = false;
	this->vivo = true;
	this->Fataque = NULL;

}

cDragon::cDragon(string Nombre, eTamanio Tamanio, eColor Color, bool Estado)
{
	this->nombre = Nombre;
	this->tamanio = Tamanio;
	this->color = Color;
	this->estado = Estado;
	this->vivo = true;
	this->Fataque = NULL;
}

cDragon::~cDragon()
{
}

