#include <stdio.h>

/* En este problema tienes que leer un valor entero
* y calcular el menor número posible de billetes en
* que puede ser descompuesto. Los billetes posibles son
* 100, 50, 20, 10, 5, 2 y 1.
* Imprimir el valor leído y la lista de billetes.
*/

int main(){
	int NUMBER,DECOMPOSE;
	
	scanf("%d", &NUMBER);	
	printf("%d\n", NUMBER);

	DECOMPOSE = NUMBER / 100;
	NUMBER = NUMBER%100;
	printf("%d nota(s) de R$ 100,00\n", DECOMPOSE);

	DECOMPOSE = NUMBER / 50;
	NUMBER = NUMBER%50;
	printf("%d nota(s) de R$ 50,00\n", DECOMPOSE);

	DECOMPOSE = NUMBER / 20;
	NUMBER = NUMBER%20;
	printf("%d nota(s) de R$ 20,00\n", DECOMPOSE);

	DECOMPOSE = NUMBER / 10;
	NUMBER = NUMBER%10;
	printf("%d nota(s) de R$ 10,00\n", DECOMPOSE);

	DECOMPOSE = NUMBER / 5;
	NUMBER = NUMBER%5;
	printf("%d nota(s) de R$ 5,00\n", DECOMPOSE);

	DECOMPOSE = NUMBER / 2;
	NUMBER = NUMBER%2;
	printf("%d nota(s) de R$ 2,00\n", DECOMPOSE);

	DECOMPOSE = NUMBER / 1;
	printf("%d nota(s) de R$ 1,00\n", DECOMPOSE);

	return 0;
}

