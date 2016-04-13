#ifndef __OBSERVADOR__
#define __OBSERVADOR__

#include "Observer.h"
#include <iostream>

using namespace std;

class Observador: public Observer
{
		public:
			Observador();
			void update(string newState);
};
#endif