#include"Headers.h"

void cJinete::Alta_nombre(cDragon* dragon_n)
{
}

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

void cJinete::Interaccion(cDragon* dragon) //Como es jinete entrena dragon
{
	//funcion que entrene a dragon
}

void cJinete::entrenamiento_bocon()
{
	this->resultado = resultadoRandom();  //guarda alguna de las 5 posibilidades del entrenamiento con bocon
}

string cJinete::to_string()
{
	stringstream aux;

	aux << this->nombre << " " << this->apellido << "mas conocido como" << this->apodo << "de" << this->edad << "años" << 
		",es un" << this->posicion << this->caracteristica << "y gran jinete, que logro el resultado de:" <<
		this->resultado << "en el entrenamiento de Bocon." << endl;

	return aux.str();
}

list<cDragon*> cJinete::getDragones()
{
	return dragones_montados;
}

string cJinete::get_apodo()
{
	return apodo;
}

int cJinete::get_edad() 
{
	return edad;
}

eResultado cJinete::get_resultado() 
{
	return resultado;
}

void cJinete::set_resultado(eResultado resultado)
{
	this->resultado = resultado;
}

cJinete::cJinete(string Apodo, int Edad,eResultado Resultado)
{
	this->apodo = Apodo;
	this->edad = Edad;
	this->resultado = Resultado;
	this->dragones_montados = NULL;
}

cJinete::~cJinete()
{
}
