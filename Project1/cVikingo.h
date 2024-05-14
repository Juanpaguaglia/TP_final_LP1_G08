#include"Headers.h"

class cVikingo
{
private:

	string nombre;
	string apellido;
	string posicion;
	int dragones_matados;

public:

	string Trabajar(); //Funciona como un get posicion
	bool Dragones_terminados();
	void Atacar_dragones();
	void Matar_dragon();
	string get_nombre();
	string get_apellido();
	int get_dragones_matados();
	void set_dragones_matados(int n);
	cVikingo();
	cVikingo(string Nombre, string Apellido, string Posicion);
	~cVikingo();

};

