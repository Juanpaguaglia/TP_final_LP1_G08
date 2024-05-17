#include"Headers.h"

class cEstoico
{
private:
	list <cDragon*> dragones;
	list <cJinete*> jinetes;
	list <cVikingo*> vikingos;
public:
	list <cDragon*> getDragones(); 
	list <cJinete*> getJinetes(); 
	list <cVikingo*> getVikingos(); 
	cEstoico();
	cEstoico(cDragon* dragon1, cJinete* jinete1, cVikingo* vikingo1);
	~cEstoico();
};

