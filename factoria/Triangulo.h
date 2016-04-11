#ifndef __TRIANGULO__
#define __TRIANGULO__

#include <stdio.h>

class Triangulo
{
	private:
		int ladoA;
		int ladoB;
		int ladoC;

	public:
		Triangulo(int l1, int l2, int l3);
		virtual char* getDescription()=0;
		
};
#endif