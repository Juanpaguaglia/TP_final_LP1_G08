#include "Headers.h"

int cEstoico::vikingosActivos = 0;
int cEstoico::dragonesActivos = 0;

list<cDragon*> cEstoico::getDragones()
{
	return dragones;
}

list<cVikingo*> cEstoico::getVikingos()
{
	return vikingos;
}

void cEstoico::AgregarDragon(cDragon* dra_nue)
{
	this->dragones.push_back(dra_nue);
	dragonesActivos++;
}

void cEstoico::AgregarVikingo(cVikingo* vik_nue)
{
	this->vikingos.push_back(vik_nue);
	vikingosActivos++;
}

void cEstoico::EliminarVikingo(cVikingo* vik_elim)
{
	list<cVikingo*>::iterator it = vikingos.begin();
	while (it != vikingos.end()) {
		if (*it == vik_elim) {
			vikingos.erase(it);
		}
		it++;
	}
}

void cEstoico::EliminarDragon(cDragon* dra_elim)
{
	list<cDragon*>::iterator it = dragones.begin();
	while (it != dragones.end()) {
		if (*it == dra_elim) {
			dragones.erase(it);
		}
		it++;
	}
}

string cEstoico::to_string()
{
	stringstream aux;
	aux << "La cantidad de dragones activos es: " << cEstoico::dragonesActivos << endl; //Pq son propios de la clase no de los objetos
	list<cDragon*>::iterator it_1 = this->dragones.begin();
	while (it_1 != dragones.end()) 
	{
		aux << (*it_1)->to_stringD();
		it_1++;
	}

	aux << "La cantidad de vikingos activos es: " << cEstoico::vikingosActivos << endl;
	list<cVikingo*>::iterator it_2 = this->vikingos.begin();
	while (it_2 != vikingos.end()) 
	{
		
		cGuerrero* guerrero_aux = dynamic_cast<cGuerrero*>((*it_2)); 
		cJinete* jinete_aux = dynamic_cast<cJinete*>((*it_2));
		
		if (guerrero_aux != nullptr)
		{
			aux << guerrero_aux->to_string(); //chequear esto
		}
		else if (jinete_aux != nullptr)
		{
			aux << jinete_aux->to_string();
		}
		it_2++;
	}
	return aux.str();
}

void cEstoico::operator+(cDragon* dra_nue)
{
	AgregarDragon(dra_nue);
}

void cEstoico::operator+(cVikingo* vik_nue)
{
	AgregarVikingo(vik_nue);
}

void cEstoico::operator-(cDragon* dra_elim)
{
	if (dra_elim != nullptr)
		EliminarDragon(dra_elim);
	else
		throw exception("No se puede eliminar, vacio"); //hacer el try catch
}

void cEstoico::operator-(cVikingo* vik_elim)
{
	if (vik_elim != nullptr)
		EliminarVikingo(vik_elim);
	else
		throw exception("No se puede eliminar, vacio"); //hacer el try catch
}

void cEstoico::operator<<(cEstoico* Estoico_n)
{
	Estoico_n->to_string();
}

cEstoico::cEstoico(cDragon* dragon1, cVikingo* vikingo1)
{
	this->dragones.push_back(dragon1);
	this->vikingos.push_back(vikingo1);
}

cEstoico::~cEstoico()
{
}
