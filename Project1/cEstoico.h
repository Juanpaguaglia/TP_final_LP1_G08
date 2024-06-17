#include"Headers.h"

class cEstoico
{
private:
	static int vikingosActivos;
	static int dragonesActivos;
	list <cDragon*> dragones;
	list <cJinete*> jinetes; //Sacar cuando hagamos la herencia
	list <cVikingo*> vikingos;
public:
	list <cDragon*> getDragones(); 
	list <cJinete*> getJinetes(); //Sacara cuando hagamos herencia
	list <cVikingo*> getVikingos(); 
	void AgregarDragon(cDragon* dra_nue);
	void AgregarVikingo(cVikingo* vik_nue);
	void EliminarVikingo(cVikingo* vik_elim);
	void EliminarDragon(cDragon* dra_elim);

	void operator+(cDragon* dra_nue);
	void operator+(cVikingo* vik_nue); 
	void operator-(cDragon* dra_elim);
	void operator-(cVikingo* vik_elim);

	//agregar funciones que hagan lo que pide la consigna

	cEstoico();
	cEstoico(cDragon* dragon1, cJinete* jinete1, cVikingo* vikingo1);
	~cEstoico();
};

