#include "cEstoico.h"

int cEstoico::vikingosActivos = 0;
int cEstoico::dragonesActivos = 0;

list<cDragon*> cEstoico::getDragones()
{
	return dragones;
}

list<cVikingo*> cEstoico::getVikingos()
{
	return vikingos;
}

list<cDragon*> cEstoico::getDragones_domados()
{
	return dragones_domados;
}

void cEstoico::AgregarDragon(cDragon* dra_nue)
{
	this->dragones.push_back(dra_nue);
	dragonesActivos++;
}

void cEstoico::AgregarVikingo(cVikingo* vik_nue)
{
	this->vikingos.push_back(vik_nue);
	vikingosActivos++;
}

void cEstoico::AgregarDrgAlista(list<cDragon*> lista, cDragon* drg_n) //Agrega un dragon especifico a una lista especifica
{
	lista.push_back(drg_n);
	dragonesActivos++;
	return;
}

void cEstoico::EliminarVikingo(cVikingo* vik_elim)
{
	list<cVikingo*>::iterator it = vikingos.begin();
	while (it != vikingos.end()) {
		if (*it == vik_elim) {
			vikingos.erase(it);
			vikingosActivos--;
			return;
		}
		it++;
	}
}

void cEstoico::EliminarDragon(cDragon* dra_elim)
{
	list<cDragon*>::iterator it = dragones.begin();
	while (it != dragones.end()) {
		if (*it == dra_elim) {
			dragones.erase(it);
			dragonesActivos--;
			return;
		}
		it++;
	}
}

string cEstoico::to_string()
{
	stringstream aux;
	aux << "La cantidad de dragones activos es: " << cEstoico::dragonesActivos << endl; //::Pq son propios de la clase no de los objetos
	list<cDragon*>::iterator it_1 = this->dragones.begin();
	while (it_1 != dragones.end()) 
	{
		aux << (*it_1)->to_stringD();
		it_1++;
	}

	aux << "La cantidad de vikingos activos es: " << cEstoico::vikingosActivos << endl;
	list<cVikingo*>::iterator it_2 = this->vikingos.begin();
	while (it_2 != vikingos.end()) 
	{
		
		cGuerrero* guerrero_aux = dynamic_cast<cGuerrero*>((*it_2)); 
		cJinete* jinete_aux = dynamic_cast<cJinete*>((*it_2));
		
		if (guerrero_aux != nullptr)
		{
			aux << guerrero_aux->to_string(); //chequear esto
		}
		else if (jinete_aux != nullptr)
		{
			aux << jinete_aux->to_string();
		}
		it_2++;
	}
	return aux.str();
}

void cEstoico::Administrar() //Funcion que voy a llamar en el main para hacer lo que me pide la consigna
{
	if (!vikingos.empty())
		{	
		for(list<cVikingo*>::iterator it_1 = this->vikingos.begin(); it_1 != vikingos.end(); it_1++) //Recorro la lista de vikingos 
			{
			for(list<cDragon*>::iterator it_2 = this->dragones.begin(); it_2 != dragones.end(); it_2++) //A su vez recorro la lista de dragones 
				{
					cJinete* aux_1 = dynamic_cast<cJinete*>(*(it_1)); //Si el vikingo es jinete...
					if (aux_1 != nullptr)
					{
						aux_1->Interaccion(*it_2); //mando el dragon a entrenar 
						if ((*it_2)->Domado() == true) //y me fijo si lo pudo domar
						{
							aux_1->Alta_nombre(*it_2); //Le cambio el nombre al dragon para que se sepa de que jinete es
							AgregarDrgAlista(dragones_domados, (*it_2)); //En caso de domarlo lo agrego a la lista de dragones domados
							EliminarDragon(*it_2); //Aca lo elimino de la lista original para que en esta lista queden solo los dragones salvajes
						} 
						break;
					}
					else 
					{
						cGuerrero* aux_2 = dynamic_cast<cGuerrero*>(*(it_1)); //Por otro lado si el vikingo es guerrero...
						if (aux_2 != nullptr)
						{
							aux_2->Interaccion(*it_2); //mando el dragon a pelear
							if ((*it_2)->Domado() == true) //y me fijo si esta domado (no lo va a estar)
							{
								AgregarDrgAlista(dragones_domados, (*it_2)); //En caso de estar domado lo agrego a domados (nunca va a pasar)
								EliminarDragon(*it_2); //Aca lo elimino de la lista original para que en esta lista queden solo los dragones salvajes 								
							} 
							break;
						}
					}

				}
			}
		}
	else
	{
		throw exception("Lista de Vikingos vacia"); //Hacer try catch
		return;
	}	
}

void cEstoico::operator+(cDragon* dra_nue)
{
	AgregarDragon(dra_nue);
}

void cEstoico::operator+(cVikingo* vik_nue)
{
	AgregarVikingo(vik_nue);
}

void cEstoico::operator-(cDragon* dra_elim) //dra_elim es el dragon que quiero eliminar de la lista
{
	if (dra_elim != nullptr)
		EliminarDragon(dra_elim);
	else
		throw exception("No se puede eliminar, vacio"); //hacer el try catch
}

void cEstoico::operator-(cVikingo* vik_elim) //vik_elim es el vikingo que quiero eliminar de la lista
{
	if (vik_elim != nullptr)
		EliminarVikingo(vik_elim);
	else
		throw exception("No se puede eliminar, vacio"); //hacer el try catch
}

ostream& operator<<(ostream& print, cEstoico Estoico_n)
{
	print << Estoico_n.to_string();
	return print;
}

cEstoico::cEstoico()
{
	this->vikingos = list<cVikingo*>();
	this->dragones = list<cDragon*>();
	this->dragones_domados = list<cDragon*>();
}

cEstoico::~cEstoico()
{
}
