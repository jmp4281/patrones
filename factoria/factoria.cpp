// Delegamos la creacion de objetos a otras clases
//  - Por ejemplo no conocemos el tipo de objetos que vamos a crear
//  - Se lo delegamos a subclases
//
//  Ejemplo de uso
//       Framework que tiene que presentar distintos tipos de documentos
//       Abstracciones:
//         - Documento: Se definen como subclases
//         - Aplicacion: Sabe cuando crear un documento, pero no el tipo
//
//       Solucion:   Encapsulamos el conocimiento sobre que subclase de Dcoumento crear
//                   y ese conocimiento se mueve fuera del framework
//
//  En este ejemplo vamos a tener una clase triangulo, y 3 subclases, isosceles, escaleno, equilatero
// El cliente simplemente va a crear objetos de clase triangulo y pasarle el tamaño de los lados
// En tiempo de ejecucion es cuando se decidira que tipo de triagulos empleamos

#include <stdio.h>
#include "TrianguloFactory.h"

int main()
{
	//La factoria es la que se encarga de todo el proceso de creacion
	TrianguloFactory* trFactory =  new TrianguloFactory();

	//Es en tiempo de ejecucion cuando se decide crear un tipo de triangulo u otro
	//Para el que lo crea es transparente
	Triangulo* triangulo1 = trFactory->createTriangulo(15, 20, 30);
	Triangulo* triangulo2 = trFactory->createTriangulo(15, 15, 15);
	Triangulo* triangulo3 = trFactory->createTriangulo(15, 15, 30);

	printf("Triangulo 1: %s", triangulo1->getDescription());
	printf("Triangulo 2: %s", triangulo2->getDescription());
	printf("Triangulo 3: %s", triangulo3->getDescription());


}
