#include "TrianguloFactory.h"
#include "TrianguloEscaleno.h"
#include "TrianguloIsosceles.h"
#include "TrianguloEquilatero.h"



TrianguloFactory::TrianguloFactory()
{

}


Triangulo* TrianguloFactory::createTriangulo(int l1, int l2, int l3)
{
	if(l1==l2 && l2==l3)
		return new TrianguloEquilatero(l1,l2,l3);
	else if(l1!=l2 && l2!=l3 && l1!=l3)
		return new TrianguloEscaleno(l1,l2,l3);
	else
		return new TrianguloIsosceles(l1,l2,l3);
}

