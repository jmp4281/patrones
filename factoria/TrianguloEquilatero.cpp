#include "TrianguloEquilatero.h"


TrianguloEquilatero::TrianguloEquilatero(int l1, int l2, int l3): Triangulo(l1,l2,l3)
{
}

		
char* TrianguloEquilatero::getDescription()
{
	return "Soy un Triangulo Equilatero\n";
}