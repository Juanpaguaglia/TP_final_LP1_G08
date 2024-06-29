#pragma once
#include<string>
#include<list>
#include<iostream>
#include<exception>
#include<fstream>
#include<vector>
#include<random>
#include <cstdlib>
#include<sstream>
using namespace std;

enum eTipoAD { llama, rayo, acido };
enum eTipoDefensa { mordida, garrazo, coletazo };
enum eArmas { espada, hacha, arcoflecha, lanza };
enum eTamanio {	chico, mediano, grande };
enum eColor { rojo, azul, amarillo, negro };
enum eCaracteristica { grandote, religioso, creativo, astuto };
enum ePosicion { constructor, sacerdote, artesano, comerciante };
enum eResultado { No_asistio, Aprobado, Desaprobado, Primero, Ultimo };