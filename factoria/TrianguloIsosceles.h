#ifndef __TRIANGULO_ISOSCELES__
#define __TRIANGULO_ISOSCELES__

#include "Triangulo.h"

class TrianguloIsosceles: public Triangulo
{
		public:
			TrianguloIsosceles(int l1, int l2, int l3);
			char* getDescription();
};

#endif