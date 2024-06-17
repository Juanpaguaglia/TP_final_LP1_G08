#include"Headers.h"

void cJinete::Incorporar_Dragon(cDragon* dragon_n)
{
	this->dragones_montados.push_back(dragon_n);
}

void cJinete::EliminarDragon(cDragon* dragon_e)
{
	list<cDragon*>::iterator it = dragones_montados.begin();
	while (it != dragones_montados.end()) {
	if (*it == dragon_e)
		dragones_montados.erase(it);
	it++;
	}

	if (it == dragones_montados.end())
			throw exception("El elemento no esta en la lista");
}

void cJinete::Interaccion(cDragon* dragon)
{
	
}

list<cDragon*> cJinete::getDragones()
{
	return dragones_montados;
}

string cJinete::get_apodo()
{
	return apodo;
}

string cJinete::get_fecha_nacimiento() 
{
	return fecha_nacimiento;
}

eResultado cJinete::get_resultado() 
{
	return resultado;
}

void cJinete::set_resultado(eResultado resultado)
{
	this->resultado = resultado;
}

cJinete::cJinete(string Apodo, string Fecha_Nacimiento,eResultado Resultado)
{
	this->apodo = Apodo;
	this->fecha_nacimiento = Fecha_Nacimiento;
	this->resultado = Resultado;
	this->dragones_montados = NULL;
}

cJinete::~cJinete()
{
}
