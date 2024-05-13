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
	enum forma_de_ataque
	{
		ataque_1, ataque_2, ataque_3
	};

public:

	void Alta_nombre(string Nombre); //set nombre
	bool Domado(); //get estado
	void Entrenar();
	void Baja(); //llama al destructor¿¿¿
	void set_forma_de_ataque(enum Forma_de_Ataque);
	string get_nombre();
	string get_caracteristica();
	float get_tamanio();
	string get_color();
	void set_estado(bool Estado);
	enum get_forma_de_ataque();
	bool get_entrenando();
	cDragon();
	cDragon(string Nombre, string Caracteristica, float Tamanio, string Color, bool Entrenando, bool Estado, enum Forma_de_Ataque);
	~cDragon();

};

