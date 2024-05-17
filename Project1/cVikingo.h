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
	bool Dragones_terminados(); //devuelve true si el vikingo mato mas de 1 dragon
	void Atacar_dragones(); //Avisa que van a ir a atacar
	void Matar_dragon(); //Mata un dragon (es como un set dragon pero de a uno por vez)
	string get_nombre();
	string get_apellido();
	int get_dragones_matados();
	void set_dragones_matados(int n);
	cVikingo();
	cVikingo(string Nombre, string Apellido, string Posicion);
	~cVikingo();

};

