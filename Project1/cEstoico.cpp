#include "Headers.h"

list<cDragon*> cEstoico::getDragones()
{
	return dragones;
}

list<cJinete*> cEstoico::getJinetes()
{
	return jinetes;
}

list<cVikingo*> cEstoico::getVikingos()
{
	return vikingos;
}

cEstoico::cEstoico(cDragon* dragon1, cJinete* jinete1, cVikingo* vikingo1)
{
	this->dragones.push_back(dragon1);
	this->jinetes.push_back(jinete1);
	this->vikingos.push_back(vikingo1);
}

cEstoico::~cEstoico()
{
}
