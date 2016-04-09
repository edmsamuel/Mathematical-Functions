/*
* Generador de números primos
*
* Se recibe un número representando el limite
* de la lista del conjunto de números primos.
*
* @author Martin Samuel Esteban Diaz <edmsamuel>
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// función para generar números primos
void generatePrimeNumbers( int limite ) {

	int numero;
	int item;
	int matches;
	float cociente;

	// loop para los items
	for ( item = 2; item <= limite; item++ ) {

		//- todo número es divisible entre uno, ya se tiene uno por defecto.
		matches = 1;

		// loop para obtener el recuento de numeros divisibles para el item
		for ( numero = 2; numero <= item; numero++ ) {

			// dividir el item por el numero
			cociente = ( (float)item / (float)numero );

			// verificar si el cociente no tiene parte fraccionaria
			if ( cociente == (int)cociente ) {
				matches++;
			}

		}

		// verificar la cantidad de numeros divisibles
		if ( matches == 2 ) {
			printf("%d es primo\n", item );
		}

	}

}




// main function
int main(int argc, char const *argv[]) {
	/* code */
	int argIndex;
	int limit;
	const char limitArg[] = "--limit";

	// search the limit value
	for( argIndex = 1; argIndex < argc; argIndex++ ) {

		if ( strncmp( argv[ argIndex ], limitArg, 8) ) {

			// convert the string of limit value to integer
			limit = atoi( argv[ argIndex ] );
			printf("Limite de tabla definido en: %d\n", limit );
			break;
		}
	}

	// generate the list of numbers
	generatePrimeNumbers( limit );



	return 0;
}
