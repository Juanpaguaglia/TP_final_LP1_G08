#include"Headers.h"

class cAtaque //clase base de ataqueCC y ataqueAD
{
protected:
	int danio;

public:
	int get_danio();
	void set_danio(int danio_n);

	cAtaque();
	cAtaque (int danio_n);
	virtual ~cAtaque();

	virtual void Polimorfico_no_desarrollado()=0;

};

