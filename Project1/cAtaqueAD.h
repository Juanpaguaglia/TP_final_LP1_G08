#include "Headers.h"

enum eTipoAD 
{
	llama, rayo, acido
};

class cAtaqueAD : public cAtaque
{
protected:

	eTipoAD tipoAD;

public:

	eTipoAD get_tipoAD();
	void set_tipoAD(int danio, eTipoAD tipoad);

	cAtaqueAD();
	~cAtaqueAD();

	void Polimorfico_no_desarrollado();
};

