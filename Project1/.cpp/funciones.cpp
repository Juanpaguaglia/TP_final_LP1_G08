#include<iostream>
#include<random>
using namespace std;

//funcion para generar true o false
bool random_bool()
{
	random_device rand;//variable para el random
	mt19937 gen(rand());// es el nombre del generador de numero aleatorios (2^19937 es la secuencia antes de repetirse)
	uniform_int_distribution<int> dist(0, 1);//produce numeros en el rango de [0,1]
	return dist(gen) == 1;// devuelve true si fue 1 y false si fue 0
}


enum eResultado
{
	No_asistio, Aprobado, Desaprobado, Primero, Ultimo
};

eResultado resultadoRandom()
{
	random_device rand;
	mt19937 gen(rand());
	uniform_int_distribution<int> dist(0, 4);
	return static_cast<eResultado>(dist(rand)); //genera un num aleatorio entre el 0 y 4 y devuelve el valor correspondiente a ese enum
}

int numeroRandom1_4() {

	random_device rand;
	mt19937 gen(rand());
	std::uniform_int_distribution<> distribucion(1, 4);

	return distribucion(gen);
}

int numeroRandom1_50() {

	random_device rand;
	mt19937 gen(rand());
	std::uniform_int_distribution<> distribucion(1, 50);

	return distribucion(gen);
}

enum eTipoAD //Esta es para generar un valor aleatorio del tipo enum "eTipoAD"
{
	llama, rayo, acido
};

eTipoAD getRandomTipoAD() {
	static random_device rd;
	static mt19937 gen(rd());
	static uniform_int_distribution<> dis(0, 2);

	// eSto devuelve este numero entero pero convertido a eTipoAD mediante el static_cast.
	return static_cast<eTipoAD>(dis(gen));
}

//Sería una forma de hacer lo mismo que la funcion random anterior pero sin usar static_cast
enum eTipoDefensa
{
	mordida, garrazo, coletazo
};
eTipoDefensa getRandomTipoDefensa()
{
	static random_device rd;
	static mt19937 gen(rd());
	static uniform_int_distribution<> dis(0, 2); // Suponiendo que hay 3 valores en el enum eTipoDefensa

	int randNum = dis(gen);

	switch (randNum)
	{
	case 0:
		return mordida;
	case 1:
		return garrazo;
	case 2:
		return coletazo;
	default:
		return mordida; // Valor por defecto en caso de error
	}
}