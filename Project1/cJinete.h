#include"Headers.h"

enum eResultado
{
	No_asistio, Aprobado, Desaprobado, Primero, Ultimo
};

class cJinete:public cVikingo
{
protected:

	string apodo;
	int edad;
	eResultado resultado;
	list <cDragon*> dragones_montados;

public:

	void Alta_nombre(cDragon* dragon_n);
	void Incorporar_Dragon(cDragon* dragon_n); //es un set al final de la lista de dragones
	void EliminarDragon(cDragon* dragon_e); //hacer try catch exception
	void Interaccion(cDragon* dragon); //En este caso va a ser entrenarlo
	void entrenamiento_bocon();

	list <cDragon*> getDragones();//get de la lista de dragones
	string get_apodo();
	int get_edad();
	eResultado get_resultado();
	void set_resultado(eResultado resultado);

	cJinete(string Apodo, int Edad, eResultado resultado);
	~cJinete();

};

