#ifndef __OBSERVADO__
#define __OBSERVADO__

#include "Observer.h"
#include <set>
#include <iostream>
#include <stdio.h>

using namespace std;

class Observado
{
	public:
		string state;
		set<Observer*> observadores;

	public:
		Observado();
		void registerObserver(Observer *o);
		void removeObserver(Observer *o);
		void notifyObservers();
		void changeState(string cad);
		string getState() { return state; }
};
#endif