#include"Headers.h"


enum eforma_de_ataque
{
	Ataque_1, Ataque_2, Ataque_3
}; 

class cAtaque
{
private:
	eforma_de_ataque forma_de_ataque;

public:
	eforma_de_ataque get_forma_de_ataque() const;
	void set_forma_de_ataque(eforma_de_ataque Forma_de_ataque);
	cAtaque();
	cAtaque (eforma_de_ataque forma_de_ataque);
	~cAtaque();

};

