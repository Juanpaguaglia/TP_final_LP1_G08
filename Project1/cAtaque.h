#include"Headers.h"

class cAtaque
{
private:
	enum forma_de_ataque
	{
		Ataque_1, Ataque_2, Ataque_3
	};

public:
	enum get_forma_de_ataque();
	void set_forma_de_ataque(enum Forma_de_ataque);
	cAtaque();
	cAtaque(enum Forma_de_ataque);
	~cAtaque();

};

