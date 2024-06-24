#include"Headers.h"
#include "cDragon.h"

bool cDragon::Domado()
{
	return estado;
}

void cDragon::Baja()
{
	vivo = false;
}

void cDragon::AgregarFataque(cAtaque* Fata_nue)
{
	this->Fataque.push_back(Fata_nue);
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

string cDragon::to_stringD()
{
	stringstream aux;
	aux << "(" << this->vivo << ")" << this->nombre << "," << this->tamanio << "y de color" << this->color << "está" << this->estado << "y tiene las siguientes formas de ataque:";

	list<cAtaque*>::iterator it = Fataque.begin();
	while (it != Fataque.end()) 
	{
		cAtaqueAD* ataqueAD = dynamic_cast<cAtaqueAD*>(*it);
		if (ataqueAD != nullptr) 
		{
			aux << ataqueAD->to_stringAD();
		}
		else
		{
			cDefensa* defensa = dynamic_cast<cDefensa*>(*it);
			if (defensa != nullptr)
			{
				aux << defensa->to_stringDef();
			}
			it++;
		}
	}
		return aux.str();
}

cDragon::cDragon(string Nombre, eTamanio Tamanio, eColor Color)
{
	this->nombre = Nombre;
	this->tamanio = Tamanio;
	this->color = Color;
	this->vida = 100;
	this->estado = false;
	this->vivo = true;
	this->Fataque = list<cAtaque*>();
}

cDragon::~cDragon()
{
}

