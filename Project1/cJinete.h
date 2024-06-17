#include"Headers.h"

enum eResultado
{
	No_asistio, Aprobado, Desaprobado, Primero, Ultimo
};

class cJinete:public cVikingo
{
protected:

	string apodo;
	string fecha_nacimiento;
	eResultado resultado;
	list <cDragon*> dragones_montados;

public:

	void Incorporar_Dragon(cDragon* dragon_n); //es un set al final de la lista de dragones
	void EliminarDragon(cDragon* dragon_e); //hacer try catch exception
	void Interaccion(cDragon* dragon); //En este caso va a ser entrenarlo y en el guerrero matarlo

	list <cDragon*> getDragones();//get de la lista de dragones
	string get_apodo();
	string get_fecha_nacimiento();
	eResultado get_resultado();
	void set_resultado(eResultado resultado);

	cJinete(string Apodo, string Fecha_Nacimiento, eResultado resultado);
	~cJinete();

};

