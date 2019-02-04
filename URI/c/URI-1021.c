#include <stdio.h>

/* Recibir un valor de punto flotante con dos números decimales.
* Este valor representa un valor monetario. Luego de esto, calcular
* el menor numero posible de billetes y monedas en los cuales su
* valor puede ser descompuesto. Los billetes a tener en cuenta son
* de 100, 50, 20, 10, 5, 2. 
* Las monedas posibles son de 1, 0.50, 0.25, 0.10, 0.05 y 0.01. 
* Mostrar el mensaje "NOTAS:" seguido de
* una lista de billetes y el mensaje "MOEDAS:" seguido de
* una lista de monedas. 
*/

int main(){
	double NUMBER;
	int DECOMPOSE, AUX;
	
	scanf("%lf", &NUMBER);	

	AUX = NUMBER*100;
	DECOMPOSE = AUX / 10000;
	AUX = AUX%10000;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", DECOMPOSE);

	DECOMPOSE = AUX / 5000;
	AUX = AUX%5000;
	printf("%d nota(s) de R$ 50.00\n", DECOMPOSE);

	DECOMPOSE = AUX / 2000;
	AUX = AUX%2000;
	printf("%d nota(s) de R$ 20.00\n", DECOMPOSE);

	DECOMPOSE = AUX / 1000;
	AUX = AUX%1000;
	printf("%d nota(s) de R$ 10.00\n", DECOMPOSE);

	DECOMPOSE = AUX / 500;
	AUX = AUX%500;
	printf("%d nota(s) de R$ 5.00\n", DECOMPOSE);

	DECOMPOSE = AUX / 200;
	AUX = AUX%200;
	printf("%d nota(s) de R$ 2.00\n", DECOMPOSE);

	printf("MOEDAS:\n");

	DECOMPOSE = AUX / 100;
	AUX = AUX % 100;
	printf("%d moeda(s) de R$ 1.00\n", DECOMPOSE);

	DECOMPOSE = AUX / 50;
	AUX = AUX % 50;
	printf("%d moeda(s) de R$ 0.50\n", DECOMPOSE);

	DECOMPOSE = AUX / 25;
	AUX = AUX % 25;
	printf("%d moeda(s) de R$ 0.25\n", DECOMPOSE);

	DECOMPOSE = AUX / 10;
	AUX = AUX % 10;
	printf("%d moeda(s) de R$ 0.10\n", DECOMPOSE);

	DECOMPOSE = AUX / 5;
	AUX = AUX % 5;
	printf("%d moeda(s) de R$ 0.05\n", DECOMPOSE);

	DECOMPOSE = AUX / 1;
	AUX = AUX % 1;
	printf("%d moeda(s) de R$ 0.01\n", DECOMPOSE);

	return 0;
}

