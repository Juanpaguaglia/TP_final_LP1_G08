#include"Headers.h"

enum eTamanio 
{
	chico, mediano, grande
};

enum eColor
{
	rojo, azul, amarillo, negro
};

class cDragon
{
private:

	static int dragonesCreados;
	string nombre;
	eTamanio tamanio;
	eColor color;
	bool estado; //True si esta domado; False si no lo esta
	bool vivo; 
	list<cAtaque*> Fataque;

public:

	void Alta_nombre(string Nombre); //set nombre
	bool Domado(); //get estado
	void Baja(); //set vivo, es decir cuando muere el dragon le cambia el atributo
	
	list<cAtaque*> get_Fataque();
	string get_nombre();
	eTamanio get_tamanio();
	eColor get_color();
	void set_estado(bool Estado);
	bool get_vivo();

	cDragon();
	cDragon(string Nombre,eTamanio Tamanio, eColor Color, bool Estado);
	~cDragon();

};

