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
	bool vivo; 
	cAtaque* ataque;

public:

	void Alta_nombre(string Nombre); //set nombre
	bool Domado(); //get estado
	void Entrenar(); //si el dragon esta domado entrena
	void Baja(); //set vivo, es decir cuando muere el dragon le cambia el atributo
	string get_nombre();
	string get_caracteristica();
	float get_tamanio();
	string get_color();
	void set_estado(bool Estado);
	bool get_entrenando();
	bool get_vivo();
	cDragon();
	cDragon(string Nombre, string Caracteristica, float Tamanio, string Color, bool Entrenando, bool Estado, bool Vivo);
	~cDragon();

};

