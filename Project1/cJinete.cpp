#include"Headers.h"

void cJinete::Alta_nombre(cDragon* dragon_n)
{
}

void cJinete::Incorporar_Dragon(cDragon* dragon_n)
{
	this->dragones_montados.push_back(dragon_n);
}

void cJinete::EliminarDragon(cDragon* dragon_e)
{
	list<cDragon*>::iterator it = dragones_montados.begin();
	while (it != dragones_montados.end()) {
	if (*it == dragon_e)
		dragones_montados.erase(it);
	it++;
	}

	if (it == dragones_montados.end())
			throw exception("El elemento no esta en la lista");
}

void cJinete::Interaccion(cDragon* dragon) //Como es jinete entrena dragon
{
    if (dragon->Domado()!=true)
    {
        cout << "El dragon" << dragon->get_nombre() << "no esta domado, por lo que no se puede entrenar." << endl;
        return;
    }
    else
    {
        cout << "Entrenando a mi dragon --> " << dragon->get_nombre()<< endl;

        for (list<cAtaque*>::iterator it = dragon->get_Fataque().begin(); it != dragon->get_Fataque().end(); ++it) // para recorrer todos los ataques que posee el dragón
        {
            cAtaqueAD* ataqueAD = dynamic_cast<cAtaqueAD*>(*it);// Intenta convertir el puntero base a tipos derivados usando dynamic_cast
            if (ataqueAD != nullptr)
            {
                cout << "Entrenando nuevo ataque a distancia..." << endl;// Si es un ataque de tipo AD (Ataque a Distancia)

                if (resultado == Primero) {
                    ataqueAD->set_danio(ataqueAD->get_danio() + 3);
                }
                else if (resultado == Aprobado) {
                    ataqueAD->set_danio(ataqueAD->get_danio() + 2);
                }
                else if (resultado == Ultimo) {
                    ataqueAD->set_danio(ataqueAD->get_danio() + 1);
                }
                else {
                    cout<<"Como obtuvo" << resultado <<", usted no puede entrenar a su dragon";
                }
            }
            else
            {
                cDefensa* defensa = dynamic_cast<cDefensa*>(*it);
                if (defensa != nullptr)
                {
                    cout << "Entrenando nueva defensa..." << endl;// Si es una defensa

                    if (resultado == Primero) {
                        defensa->set_danio(defensa->get_danio() + 3);
                    }
                    else if (resultado == Aprobado) {
                        defensa->set_danio(defensa->get_danio() + 2);
                    }
                    else if (resultado == Ultimo) {
                        defensa->set_danio(defensa->get_danio() + 1);
                    }
                    else {
                        cout << "Como obtuvo" << resultado << ", usted no puede entrenar a su dragon";
                    }
                }
                else
                {
                    // No debería ocurrir si todos los elementos en Fataque son de tipos derivados correctos
                    throw exception("Error: Tipo de ataque no reconocido."); //Hacer el try catch en el main
                }
            }
        }
    }
    cout << "Entrenamiento completado para el dragon " << dragon->get_nombre()<< "." << endl;
    return;
}

void cJinete::entrenamiento_bocon()
{
	this->resultado = resultadoRandom();  //guarda alguna de las 5 posibilidades del entrenamiento con bocon
}

string cJinete::to_string()
{
	stringstream aux;

	aux << this->nombre << " " << this->apellido << "mas conocido como" << this->apodo << "de" << this->edad << "años" << 
		",es un" << this->posicion << this->caracteristica << "y gran jinete, que logro el resultado de:" <<
		this->resultado << "en el entrenamiento de Bocon." << endl;

	return aux.str();
}

list<cDragon*> cJinete::getDragones()
{
	return dragones_montados;
}

string cJinete::get_apodo()
{
	return apodo;
}

int cJinete::get_edad() 
{
	return edad;
}

eResultado cJinete::get_resultado() 
{
	return resultado;
}

void cJinete::set_resultado(eResultado resultado)
{
	this->resultado = resultado;
}

cJinete::cJinete(string Apodo, int Edad,eResultado Resultado):cVikingo()
{
	this->apodo = Apodo;
	this->edad = Edad;
	this->resultado = Resultado;
	this->dragones_montados = list<cDragon*>();
}

cJinete::~cJinete()
{
}
