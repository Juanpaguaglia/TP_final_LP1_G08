#include"cEstoico.h"

int main() 
{
    cEstoico Estoico = cEstoico();
    cDragon* dragon1 = new cDragon("Furia", chico, rojo);
    cDragon* dragon2 = new cDragon("Tristeza", mediano, azul);
    cDragon* dragon_elim = new cDragon("A eliminar", chico, negro); //Va a ser agregado y eliminado
    cVikingo* jinete1 = new cJinete("Juan", "Guaglia", "Jupi", 20, creativo);
    cVikingo* jinete2 = new cJinete("Santiago", "Vargas", "Santi", 21, astuto); 
    cVikingo* jinete_elim = new cJinete("A eliminar", "A eliminar", "A eliminar", 0, grandote); //Va a ser agregado y eliminado
    cVikingo* guerrero1 = new cGuerrero("Julian", "Alvarez", religioso, lanza);
    cVikingo* guerrero2 = new cGuerrero("Enzo", "Fernandez", religioso, espada);
    cAtaque* ataque1 = new cAtaqueAD();
    cAtaque* ataque2 = new cAtaqueAD();
    cAtaque* defensa1 = new cDefensa();
    cAtaque* defensa2 = new cDefensa();

    dragon1->AgregarFataque(ataque1);
    dragon1->AgregarFataque(defensa1);
    dragon2->AgregarFataque(ataque2);
    dragon2->AgregarFataque(defensa2);
    Estoico + dragon_elim;
    try
    {
        Estoico - dragon_elim; //Agrego y elimino un objeto para el control de excepciones
    }
    catch (const exception& e) 
    {
        cout << e.what() << endl;
    }
    Estoico + jinete_elim;
    try 
    {
        Estoico - jinete_elim; //Agrego y elimino un objeto para el control de excepciones
    }
    catch (const exception& e) 
    {
        cout << e.what() << endl;
    }
    Estoico + dragon1;
    Estoico + dragon2;
    Estoico + jinete1;
    Estoico + jinete2;
    Estoico + guerrero1;
    Estoico + guerrero2;
    try
    {
        Estoico.Administrar();
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }
    cout << Estoico;

    delete dragon1;
    delete dragon2;
    delete jinete1;
    delete jinete2;
    delete guerrero1;
    delete guerrero2;
    delete ataque1;
    delete ataque2;
    delete defensa1;
    delete defensa2;

return 0;
}