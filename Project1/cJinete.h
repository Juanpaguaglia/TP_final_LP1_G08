#include"Headers.h"

enum eresultado
{
	No_asistio, Aprobado, Desaprobado, Primero, Ultimo
};

class cJinete
{
private:

	string nombre;
	string apellido;
	string apodo;
	int fecha_nacimiento;
	string caracteristicas_fisicas;
	eresultado resultado;
	list <cDragon*> dragones;

public:

	void Incorporar_Dragon(cDragon* dragon_n); //es un set al final de la lista de dragones
	//falta un get de la lista de dragones
	string get_nombre();
	string get_apellido();
	string get_apodo();
	int get_fecha_nacimiento();
	string get_caracteristicas_fisicas();
	eresultado get_resultado() const;
	cJinete();
	cJinete(string Nombre, string Apellido, string Apodo, const int Fecha_Nacimiento, string Caracteristicas_Fisicas, eresultado resultado, list <cDragon*> dragones);
	~cJinete();

};

