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

}

void cEstoico::EliminarDragon(cDragon* dra_elim)
{
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

cEstoico::cEstoico(cDragon* dragon1, cJinete* jinete1, cVikingo* vikingo1)
{
	this->dragones.push_back(dragon1);
	this->vikingos.push_back(vikingo1);
}

cEstoico::~cEstoico()
{
}
