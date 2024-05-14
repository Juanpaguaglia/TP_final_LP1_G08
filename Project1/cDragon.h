#include"Headers.h"

class cDragon
{
private:

	string nombre;
	string caracteristica;
	float tamanio;
	string color;
	bool entrenando;
	bool estado; //True si esta domado; False si no lo esta
	cAtaque* ataque;

public:

	void Alta_nombre(string Nombre); //set nombre
	bool Domado(); //get estado
	void Entrenar();
	void Baja(); //llama al destructor¿¿¿
	string get_nombre();
	string get_caracteristica();
	float get_tamanio();
	string get_color();
	void set_estado(bool Estado);
	bool get_entrenando();
	cDragon();
	cDragon(string Nombre, string Caracteristica, float Tamanio, string Color, bool Entrenando, bool Estado);
	~cDragon();

};

