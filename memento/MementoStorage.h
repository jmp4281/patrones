#ifndef __MEMENTO_STORAGE__
#define __MEMENTO_STORAGE__

#include <iostream>
#include <vector>

#include "memento.h"

using namespace std;

class MementoStorage
{
		private:
			vector<memento*> mementos;
		public:
			MementoStorage();
			void addMemento(memento *);
			memento* getMemento(int index);

};
#endif