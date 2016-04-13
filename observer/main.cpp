//En este caso tenemos un objeto observado y objetos observadores
//Este objeto notificara cuando se produzcan cambios en el, a sus
//Observadores mediante una llamada a un metodo update 

#include <stdio.h>
#include "Observado.h"
#include "Observador.h"


int main()
{
	
	Observador* o1 = new Observador();
	Observador* o2 = new Observador();	
	Observador* o3 = new Observador();

	Observado* observado = new Observado();
	observado->registerObserver(o1);
	observado->registerObserver(o2);
	observado->registerObserver(o3);

	printf("Desde el main forzamos un cambio de estado en el sujeto observado\n");
	observado->changeState("Estado cambiado");
	

	return 0;
}
