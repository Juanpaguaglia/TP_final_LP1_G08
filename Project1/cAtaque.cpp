#include"Headers.h"

eforma_de_ataque cAtaque::get_forma_de_ataque() const
{
	return forma_de_ataque;
}

void cAtaque::set_forma_de_ataque(eforma_de_ataque Forma_de_ataque)
{
	this->forma_de_ataque = Forma_de_ataque;
}

cAtaque::cAtaque()
{
	forma_de_ataque = Ataque_1;
}

cAtaque::cAtaque(eforma_de_ataque forma_de_ataque) 
{
	this->forma_de_ataque = forma_de_ataque;
}

cAtaque::~cAtaque()
{
}
