#include <stdio.h>
#include <stdlib.h>
#include "numeros-primos.h"

int main(int argc, char const *argv[])
{
	int primo;
	int anterior;

	anterior =  atoi( argv[ 1 ] );
	primo = siguienteNumeroPrimo( anterior );
	printf("El siguiente numero primo despues de %d es: %d\n", anterior, primo );
	return 0;
}