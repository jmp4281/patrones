#ifndef __MEMENTO__
#define __MEMENTO__

#include <iostream>
using namespace std;

class memento
{
	private:
		string state;
	public:
		memento(string stateToSave);
		string getSavedState();
};
#endif