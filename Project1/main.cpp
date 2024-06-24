#include"Headers.h"

int main() 
{
    cEstoico Estoico = cEstoico();
    cDragon* dragon1 = new cDragon("Furia", chico, rojo);
    cDragon* dragon2 = new cDragon("Tristeza", mediano, azul);
    cVikingo* jinete1 = new cJinete("Juan", "Guaglia", "Jupi", 20, creativo);
    cVikingo* jinete2 = new cJinete("Santiago", "Vargas", "Santi", 21, astuto);
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

    Estoico + dragon1;
    Estoico + dragon2;
    Estoico + jinete1;
    Estoico + jinete2;
    Estoico + guerrero1;
    Estoico + guerrero2;

    Estoico.Administrar();
    Estoico.to_string();

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