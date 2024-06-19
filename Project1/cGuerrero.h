#include "Headers.h"

enum eArmas 
{ 
	espada, hacha, arcoflecha, lanza 
};

class cGuerrero :public cVikingo
{
protected:
	eArmas arma;
	int dragones_matados;
	vector<cDragon>Dragones;
public:

	cGuerrero(string nombre, string apellido, ePosicion posicion, eCaracteristica caracteristica, eArmas arma, int dragones_matados);
	void Interaccion(cDragon* dragon); //polimorfismo de cVikingo esta vez matar al dragon

	void agregarDragonMuerto(cDragon obj_dragon);
	void mostrarDragones() const;

	~cGuerrero();
	friend cDragon;
};

