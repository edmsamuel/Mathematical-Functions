/*
* Funciones para numeros primos
*
*
* @author Martin Samuel Esteban Diaz <edmsamuel>
*/

#include <stdio.h>
#include <stdbool.h>

bool esNumeroPrimo( int numero ) {
	int item;
	int matches;
	float cociente;

	matches = 1;
	for ( item = 2; item <= numero; item++ ) {
		cociente = ( (float)numero / (float)item );

		// el cociente no debe tener parte fraccionaria
		if ( cociente == (int)cociente ) {
			matches++;
		}
	}

	// verificar la cantidad de numeros divisibles
	if ( matches == 2 ) {
		return true;
	} else {
		return false;
	}
}



int siguienteNumeroPrimo( int desde ) {
	int numero;
	bool encontrado;


	// inicio
	encontrado = false;

	if ( desde == 1 ) { return 2; }

	// verificar si el numero recibido es par, excepto el 2.
	if ( ( desde % 2 ) == 0 ) {
		numero = ( desde + 1 );
	} else if( desde == 2 ){
		return 3;
	} else {
		numero = ( desde + 2 );
	}

	while ( !encontrado ) {
		encontrado = esNumeroPrimo( numero );

		if ( !encontrado ) {
			numero += 2;
		}
	}


	return numero;
}