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
	int dragones_matados;

public:

	void Trabajar(); //Dependiendo como es el vikingo le asigna una posicion
	bool Dragones_terminados(); //devuelve true si el vikingo mato mas de 1 dragon
	void Matar_dragon(); //incrementa en 1 los ragones eliminados
	virtual void Interaccion(cDragon* dragon)const = 0;
	
	ePosicion get_posicion();
	void set_posicion(ePosicion pos);
	string get_nombre();
	eCaracteristica get_caracteristica();
	string get_apellido();
	int get_dragones_matados();
	void set_dragones_matados(int n);

	cVikingo(string Nombre, string Apellido, ePosicion posicion, eCaracteristica caracteristica);
	virtual ~cVikingo();

};

