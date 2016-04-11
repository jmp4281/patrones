#ifndef __TRIANGULO_ESCALENO__
#define __TRIANGULO_ESCALENO__
#include "Triangulo.h"

class TrianguloEscaleno: public Triangulo
{
		public:
			TrianguloEscaleno(int l1, int l2, int l3);
			char* getDescription();
};
#endif