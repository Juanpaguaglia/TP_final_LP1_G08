#include"cJinete.h"

eResultado resultadoRandom()
{
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<int> dist(0, 4);
    return static_cast<eResultado>(dist(rand)); //genera un num aleatorio entre el 0 y 4 y devuelve el valor correspondiente a ese enum
}

void cJinete::Alta_nombre(cDragon* dragon_n)
{
    list<cAtaque*> aux = dragon_n->get_Fataque();
    for (list<cAtaque*>::iterator it = aux.begin(); it != aux.end(); ++it) // para recorrer todas las formas de ataque que posee el dragón
    {
        cAtaqueAD* ataqueAD = dynamic_cast<cAtaqueAD*>(*it);// Intenta convertir el puntero base a tipos derivados usando dynamic_cast
        if (ataqueAD != nullptr)
        {
            string nombre_n;
            switch(ataqueAD->get_tipoAD())
            {
            case llama:
                nombre_n = "Llamitas de" + nombre;
                dragon_n->set_nombre(nombre_n);
            case rayo:
                nombre_n = "Tormentoso de" + nombre;
                dragon_n->set_nombre(nombre_n);
            case acido:
                nombre_n = "Venenoso de" + nombre;
                dragon_n->set_nombre(nombre_n);
            }            
        }
        else
        {
            cDefensa* defensa = dynamic_cast<cDefensa*>(*it);
            if (defensa != nullptr) 
            {
                string nombre_n;
                switch (defensa->get_tipoDefensa()) 
                {
                case mordida:
                    nombre_n = "Dentudo de" + nombre;
                    dragon_n->set_nombre(nombre_n);
                case garrazo:
                    nombre_n = "Rasguñador de" + nombre;
                    dragon_n->set_nombre(nombre_n);
                case coletazo:
                    nombre_n = "Culon de" + nombre;
                    dragon_n->set_nombre(nombre_n);
                }
            }
        }
    }
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
    list<cAtaque*> aux = dragon->get_Fataque();
    Domar(dragon); //Domo al dragon
    if (dragon->Domado()!=true) //Chequeo que este domado
    {
        cout << "El dragon" << dragon->get_nombre() << "no esta domado, por lo que no se puede entrenar." << endl;
        return;
    }
    else
    {
        cout << "Entrenando a mi dragon --> " << dragon->get_nombre()<< endl;

        for (list<cAtaque*>::iterator it = aux.begin(); it != aux.end(); ++it) // para recorrer todas las formas de ataque que posee el dragón
        {
            cAtaqueAD* ataqueAD = dynamic_cast<cAtaqueAD*>(*it);// Intenta convertir el puntero base a tipos derivados usando dynamic_cast
            if (ataqueAD != nullptr)
            {
                cout << "Entrenando nuevo ataque a distancia..." << endl;// Si es un ataque de tipo AD (Ataque a Distancia)

                if (resultado == Primero) {
                    ataqueAD->set_danio(ataqueAD->get_danio() + 3); //Si salio primero es el que mas puntos suma al daño del ataque AD del dragon
                }
                else if (resultado == Aprobado) {
                    ataqueAD->set_danio(ataqueAD->get_danio() + 2);
                }
                else if (resultado == Ultimo) {
                    ataqueAD->set_danio(ataqueAD->get_danio() + 1); //Si salio ultimo es el que menos puntos suma al daño del ataque AD del dragon
                }
                else { //Si no aprobo o no asistio no puede entrenar al dragon
                    cout<<"Como obtuvo" << resultado <<", usted no puede entrenar a su dragon";
                }
            }
            else
            {
                cDefensa* defensa = dynamic_cast<cDefensa*>(*it);
                if (defensa != nullptr)
                {
                    cout << "Entrenando nueva defensa..." << endl;// Si es una defensa

                    if (resultado == Primero) { //Si salio primero es el que mas puntos suma al daño de la defensa del dragon
                        defensa->set_danio(defensa->get_danio() + 3);
                    }
                    else if (resultado == Aprobado) { 
                        defensa->set_danio(defensa->get_danio() + 2);
                    }
                    else if (resultado == Ultimo) { //Si salio ultimo es el que menos puntos suma al daño de la defensa del dragon
                        defensa->set_danio(defensa->get_danio() + 1);
                    }
                    else { //Si no aprobo o no asistio no puede entrenar al dragon
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

void cJinete::Domar(cDragon* dragon_d)
{
    dragon_d->set_estado(true);
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

cJinete::cJinete(string Nombre, string Apellido, string Apodo, int Edad, eCaracteristica Caracteristica):cVikingo(Nombre, Apellido, Caracteristica) 
{
	this->apodo = Apodo;
	this->edad = Edad;
    entrenamiento_bocon();
	this->dragones_montados = list<cDragon*>();
}

cJinete::~cJinete()
{
}

