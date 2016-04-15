#include "Sujeto.h"



Sujeto::Sujeto()
{
	state = "Estado 1";
	cout << "Sujeto Sujeto mi estado es: " << state << endl;
}

void Sujeto::setState(string newState)
{
	state = newState;
	cout << "Sujeto nuevo estado: " << state << endl;
}

memento* Sujeto::saveToMemento()
{
	cout << "Sujeto salvando un memento" << endl;
	return new memento(state);
}

void Sujeto::restoreMemento(memento* m)
{
	state =  m->getSavedState();
	cout << "Sujeto stado restaurado: " << state << endl;

}