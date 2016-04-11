#ifndef __TRIANGULO_FACTORY__
#define __TRIANGULO_FACTORY__

#include "Triangulo.h"

class TrianguloFactory
{
	public:
		TrianguloFactory();
		Triangulo* createTriangulo(int l1, int l2, int l3);
};

#endif