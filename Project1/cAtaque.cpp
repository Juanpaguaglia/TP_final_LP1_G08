#include"Headers.h"

int cAtaque::get_danio()
{
	return danio;
}

cAtaque::cAtaque()
{
	danio = rand() % 1000; //da�o aleatorio entre 0 y 1000
}

cAtaque::cAtaque(int danio_n) 
{
	this->danio = danio_n;
}

cAtaque::~cAtaque()
{
}
