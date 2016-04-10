/*
* Descomposición de un número en factores primos.
*
* Se recibe un número a obtener la lista de sus
* factores primos.
*
* @author Martin Samuel Esteban Diaz <edmsamuel>
*/

#include <stdio.h>
#include <stdlib.h>
#include "numeros-primos.h"
#include "divisible.h"

void factoresPrimosDeNumero( int numero ) {
	int primo;
	int actual;


	actual = numero;
	primo = 2;
	while ( actual > 1 ) {

		if ( esDivisible( actual, primo ) ) {
			printf("%d | %d\n", numero, primo );
			actual = ( actual / primo );
		} else {
			primo = siguienteNumeroPrimo( primo );
		}
	}

}

int main( int argc, char const *argv[] )
{
	factoresPrimosDeNumero( atoi( argv[ 1 ] ) );
	return 0;
}