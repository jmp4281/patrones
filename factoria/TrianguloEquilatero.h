#ifndef __TRIANGULO_EQUILATERO__
#define __TRIANGULO_EQUILATERO__


#include "Triangulo.h"

class TrianguloEquilatero: public Triangulo
{
		public:
			TrianguloEquilatero(int l1, int l2, int l3);
			char* getDescription();
};
#endif