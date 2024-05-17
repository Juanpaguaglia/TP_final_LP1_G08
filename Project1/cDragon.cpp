#include"Headers.h"

void cDragon::Alta_nombre(string Nombre)
{
	nombre = Nombre;
}

bool cDragon::Domado()
{
	return estado;
}

void cDragon::Entrenar()
{
	if (estado == true)
	{
		entrenando = true;
	}
	else
	{
		entrenando = false;
	}
}

void cDragon::Baja()
{
	vivo = false;
}

string cDragon::get_nombre()
{
	return nombre;
}

string cDragon::get_caracteristica()
{
	return caracteristica;
}

float cDragon::get_tamanio()
{
	return tamanio;
}

string cDragon::get_color()
{
	return color;
}

void cDragon::set_estado(bool Estado)
{
	estado = Estado;
}

bool cDragon::get_entrenando()
{
	return entrenando;
}

bool cDragon::get_vivo()
{
	return true;
}

cDragon::cDragon()
{
	nombre = "";
	caracteristica = "";
	tamanio = 0.0;
	color = "";
	estado = false;
	entrenando = false;
	vivo = true;
	this->ataque = NULL;

}

cDragon::cDragon(string Nombre, string Caracteristica, float Tamanio, string Color, bool Entrenando, bool Estado, bool Vivo)
{
	nombre = Nombre;
	caracteristica = Caracteristica;
	tamanio = Tamanio;
	color = Color;
	entrenando = Entrenando;
	estado = Estado;
	vivo = Vivo;
	this->ataque = NULL;
}

cDragon::~cDragon()
{
}

