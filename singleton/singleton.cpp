//  Julian Muñoz
//		Ejemplo de patron singleton
//		 Con este patron logramos que solo tengamos una instancia de una clase
//			- Hacemos que el constructor sea oculto
//			- Declaramos el metodo statico GetInstance
//			- Cuando llaman a GetInstance invocamos al constructor, SOLO la primera vez
//			- En este ejemplo he creado ademas un contador de referencias para destruir la clase
//			- Para poder destruir no debe haber ninguna instancia de la misma en memoria




#include <stdio.h>
#include "SingletonClass.h"

int main()
{
	printf("Ejemplo de patron singleton\n");
	SingletonClass *sc1 = SingletonClass::GetInstance();
	SingletonClass *sc2 = SingletonClass::GetInstance();
    printf("sc1 %p sc2 %p\n", sc1 , sc2);
    sc1->DeleteInstance();
    sc2->DeleteInstance();



    return 0;
}