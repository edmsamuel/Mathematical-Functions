/*
* Comprobar si un numero es divible por otro
*
* @author Martin Samuel Esteban Diaz <edmsamuel>
*/

#include <stdio.h>
#include <stdbool.h>

bool esDivisible( numero, divisor ) {
	float cociente;

	cociente = ( (float)numero / (float)divisor );
	return ( cociente == (int)cociente );
}