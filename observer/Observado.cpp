#include "Observado.h"

Observado::Observado()
{
	state = "Estado por defecto";
	cout << "Sujeto Observado mi estado es: " << state << endl;
}

void Observado::registerObserver(Observer *o)
{
	observadores.insert(o);
}

void Observado::removeObserver(Observer *o)
{
	observadores.erase(o);
}

void Observado::notifyObservers()
{
    for (set<Observer*>::iterator it= observadores.begin(); it!=observadores.end(); ++it)
    {
      	(*it)->update(state);
    }
}

void Observado::changeState(string cad)
{
	state = cad;
	cout << "Sujeto Observado, mi estado cambia: " << state << endl;	
	notifyObservers();
}

	
