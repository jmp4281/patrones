#include "TrianguloIsosceles.h"


TrianguloIsosceles::TrianguloIsosceles(int l1, int l2, int l3): Triangulo(l1,l2,l3)
{
}
		
char* TrianguloIsosceles::getDescription()
{
	return "Soy un Triangulo Isosceles";
}