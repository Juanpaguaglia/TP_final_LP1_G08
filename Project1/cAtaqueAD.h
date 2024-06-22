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
	void set_tipoAD(eTipoAD tipoad);

	cAtaqueAD(int Danio, eTipoAD tipoAD);
	~cAtaqueAD();

	void Polimorfico_no_desarrollado()const override; // Implementación de la función virtual pura
};

