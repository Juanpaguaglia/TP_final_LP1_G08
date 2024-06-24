#include"Headers.h"

int cAtaque::get_danio()
{
	return danio;
}

void cAtaque::set_danio(int danio_n)
{
	this->danio = danio_n;
}

cAtaque::cAtaque()
{
	this->danio = numeroRandom1_50(); //daño aleatorio entre 0 y 50
}

cAtaque::cAtaque(int danio_n) 
{
	this->danio = danio_n;
}

cAtaque::~cAtaque()
{
}
