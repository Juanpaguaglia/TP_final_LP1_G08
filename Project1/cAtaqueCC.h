#include "Headers.h"

enum eTipoCC 
{
	mordida, garrazo, coletazo
};

class cAtaqueCC : public cAtaque{

protected:

	eTipoCC tipoCC;

public:

	eTipoCC get_tipoCC();
	void set_tipoCC(eTipoCC tipocc,int danio);

	cAtaqueCC();
	~cAtaqueCC();

	void Adefinir();



};

