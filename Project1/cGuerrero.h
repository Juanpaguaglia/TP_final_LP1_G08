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
	vector<cDragon>Dragones; //dragones matados
public:

	cGuerrero(string nombre, string apellido, ePosicion posicion, eCaracteristica caracteristica, eArmas arma, int dragones_matados);
	void Interaccion(cDragon* dragon); //Como es guerrero mata dragon
	void agregarDragonMuerto(cDragon obj_dragon);
	void mostrarDragones() const;
	string to_string();

	~cGuerrero();
	friend cDragon;
};
