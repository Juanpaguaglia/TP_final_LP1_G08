#include "Headers.h"

//Constructor de la derivada usando atributos de la base"cVikingo"
cGuerrero::cGuerrero(string nombre, string apellido, ePosicion posicion, eCaracteristica caracteristica, eArmas arma, int dragones_matados)
	:cVikingo(nombre, apellido, posicion, caracteristica), arma(arma), dragones_matados(dragones_matados) {}

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
		}
	}
}

//para agregar los dragones matados al vector de Dragones
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

cGuerrero::~cGuerrero()
{
}
