//En este caso tenemos un objeto observado y objetos observadores
//Este objeto notificara cuando se produzcan cambios en el, a sus
//Observadores mediante una llamada a un metodo update 

#include <stdio.h>
#include "MementoStorage.h"
#include "Sujeto.h"


int main()
{
	
	MementoStorage* mstr = new MementoStorage();
	Sujeto* s = new Sujeto();	

	s->setState("Estado 2");	
	s->setState("Estado 3");
	mstr->addMemento(s->saveToMemento());
	s->setState("Estado 4");
	mstr->addMemento(s->saveToMemento());
	s->setState("Estado 5");

	cout << "Restauramos el estado salvado primero" << endl;
	s->restoreMemento(mstr->getMemento(0));

	cout << "Restauramos el estado salvado segundo" << endl;
	s->restoreMemento(mstr->getMemento(1));

	return 0;
}
