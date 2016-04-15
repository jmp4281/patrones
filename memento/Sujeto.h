#ifndef __SUJETO__
#define __SUJETO__

#include <iostream>
#include <stdio.h>
#include "memento.h"
using namespace std;

class Sujeto
{
	public:
		string state;
		
	public:
		Sujeto();
		void setState(string newState);
		memento* saveToMemento();
		void restoreMemento(memento* m);
		
};
#endif