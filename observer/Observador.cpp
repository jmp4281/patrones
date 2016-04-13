#include "Observador.h"
//#include "Observado.h"

Observador::Observador() 
{

}


void  Observador::update(string newState) 
{
	cout << "Observador, detecto un cambio de estado en el sujeto observado: " << newState << endl;	
}