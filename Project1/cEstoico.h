#include"Headers.h"

class cEstoico
{
private:
	static int vikingosActivos;
	static int dragonesActivos;
	list <cDragon*> dragones;
	list <cVikingo*> vikingos;
public:
	list <cDragon*> getDragones(); 
	list <cVikingo*> getVikingos(); 
	void AgregarDragon(cDragon* dra_nue);
	void AgregarVikingo(cVikingo* vik_nue);
	void EliminarVikingo(cVikingo* vik_elim);
	void EliminarDragon(cDragon* dra_elim);
	string to_string();

	void operator+(cDragon* dra_nue);
	void operator+(cVikingo* vik_nue); 
	void operator-(cDragon* dra_elim);
	void operator-(cVikingo* vik_elim);
	void operator<<(cEstoico* Estoico_n); 

	//agregar funciones que hagan lo que pide la consigna

	cEstoico(cDragon* dragon1, cVikingo* vikingo1);
	~cEstoico();
};

