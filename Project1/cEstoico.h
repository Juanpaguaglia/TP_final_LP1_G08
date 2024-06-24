#include"Headers.h"

class cEstoico
{
private:
	static int vikingosActivos;
	static int dragonesActivos;
	list <cDragon*> dragones;
	list <cVikingo*> vikingos;
	list<cDragon*>dragones_domados;
public:
	list <cDragon*> getDragones(); 
	list <cVikingo*> getVikingos(); 
	list<cDragon*> getDragones_domados();
	void AgregarDragon(cDragon* dra_nue);
	void AgregarVikingo(cVikingo* vik_nue);
	void AgregarDrgAlista(list<cDragon*> lista, cDragon* drg_n);
	void EliminarVikingo(cVikingo* vik_elim);
	void EliminarDragon(cDragon* dra_elim);
	string to_string();
	void Administrar();

	void operator+(cDragon* dra_nue);
	void operator+(cVikingo* vik_nue); 
	void operator-(cDragon* dra_elim);
	void operator-(cVikingo* vik_elim);
	void operator<<(cEstoico* Estoico_n); 

	cEstoico();
	~cEstoico();
};

