#include "Headers.h"

//Constructor de la derivada usando atributos de la base"cVikingo"
cGuerrero::cGuerrero(string Nombre, string Apellido, eCaracteristica Caracteristica, eArmas Arma)
	:cVikingo(Nombre, Apellido, Caracteristica), arma(Arma)
{
	this->dragones_matados = 0;
}

void cGuerrero::Interaccion(cDragon* dragon)
{
	//simulacion de intento de matar al dragon

	int num = numeroRandom1_4(); //cuantas veces ataca al dragon
	for (int i = 0; i <= num; i++)
	{
		if (dragon->vida > 0)
		{
			dragon->vida = dragon->vida - numeroRandom1_50(); //sacarle vida al dragon
		}
		else
		{
			dragon->vida = 0;
			dragon->vivo = false;
			dragones_matados++;
			cout << "Dragon muerto" << endl;
			agregarDragonMuerto(*dragon);
		}
	}
}

//para agregar los dragones matados al vector de Dragones matados
void cGuerrero::agregarDragonMuerto(cDragon obj_dragon) {
	Dragones.push_back(obj_dragon);
}

// mostrar las instancias de cDragones guardados en el vector
void cGuerrero::mostrarDragones() const {
	cout << "Dragones en vector de Guerreros" << endl;
	for (int i = 0; i < Dragones.size(); i++)
	{
		Dragones[i].nombre;
	}
}

string cGuerrero::to_string()
{
	stringstream aux;

	aux << this->nombre << " " << this->apellido << ",un" << this->posicion << this->caracteristica<<"y gran guerrero, logro matar"<<
		this->dragones_matados << "dragones." << endl;

	return aux.str();
}

cGuerrero::~cGuerrero()
{
}
