#include"cAtaque.h"

int numeroRandom1_50()
{
	random_device rand;
	mt19937 gen(rand());
	std::uniform_int_distribution<> distribucion(1, 50);

	return distribucion(gen);
}

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
