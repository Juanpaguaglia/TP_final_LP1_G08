#include "cDragon.h"
#include <fstream>
using namespace std;

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
	//se debe eliminar el objeto de dragon pero noc como
}

//void cDragon::set_forma_de_ataque(enum Forma_de_Ataque)
//{
//	forma_de_ataque = Forma_de_Ataque;
//}

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

cDragon::cDragon()
{
	nombre = "";
	caracteristica = "";
	tamanio = 0.0;
	color = "";
	estado = false;
	entrenando = false;
	//forma_de_ataque ya que no se en que inicializarlo, se hace con un puntero a null que desp cambia
}

cDragon::cDragon(string Nombre, string Caracteristica, float Tamanio, string Color, bool Entrenando, bool Estado, enum Forma_de_Ataque)
{
	nombre = Nombre;
	caracteristica = Caracteristica;
	tamanio = Tamanio;
	color = Color;
	entrenando = Entrenando;
	estado = Estado;
	//forma_de_ataque = Forma_de_ataque ; (problema al inicializar unenum)
}

cDragon::~cDragon()
{
}

//enum cDragon::get_forma_de_ataque()
//{
//	return forma_de_ataque;
//}