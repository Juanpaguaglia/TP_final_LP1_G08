#include "cGuerrero.h"

int numeroRandom1_4()
{
	random_device rand;
	mt19937 gen(rand());
	std::uniform_int_distribution<> distribucion(1, 4);

	return distribucion(gen);
}

int numeroRandom1_10()
{
	random_device rand;
	mt19937 gen(rand());
	std::uniform_int_distribution<> distribucion(1, 10);

	return distribucion(gen);
}

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
		if (dragon->get_vida() > 0)
		{
			dragon->set_vida(dragon->get_vida() - numeroRandom1_10()); //sacarle vida al dragon
		}
		else
		{
			dragon->set_vida(0);
			dragon->set_estado(false);
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
void cGuerrero::mostrarDragones()
{
	cout << "Dragones en vector de Guerreros" << endl;
	for (int i = 0; i < Dragones.size(); i++)
	{
		cout << Dragones[i].get_nombre();
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


