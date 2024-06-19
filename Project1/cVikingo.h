#include"Headers.h"

enum eCaracteristica
{
	grandote, religioso, creativo, astuto
};

enum ePosicion
{
	constructor, sacerdote, artesano, comerciante
};

class cVikingo //clase base de jinete y guerrero
{
protected:

	string nombre;
	string apellido;
	ePosicion posicion;
	eCaracteristica caracteristica;

public:

	void Trabajar(); //Dependiendo como es el vikingo le asigna una posicion
	virtual void Interaccion(cDragon* dragon)const = 0;
	
	ePosicion get_posicion();
	void set_posicion(ePosicion pos);
	string get_nombre();
	eCaracteristica get_caracteristica();
	string get_apellido();

	cVikingo(string Nombre, string Apellido, ePosicion posicion, eCaracteristica caracteristica);
	virtual ~cVikingo();

};

