#include"Headers.h"

enum get_forma_de_ataque() 
{
	return forma_de_ataque;
}

void set_forma_de_ataque(enum Forma_de_ataque) 
{
	forma_de_ataque = Forma_de_ataque;
}

cAtaque::cAtaque()
{
	forma_de_ataque = Ataque_1;
}

cAtaque(enum Forma_de_ataque) 
{
	forma_de_ataque = Forma_de_ataque;
}

cAtaque::~cAtaque()
{
}
