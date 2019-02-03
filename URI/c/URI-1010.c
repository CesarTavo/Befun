#include <stdio.h>

/* En este problema, la tarea consiste en
* leer un código de un producto 1, el
* número de unidades del producto 1, el precio
* de una unidad de producto 1, el código
* de un producto 2, el número de unidades
* del producto 2 y el precio de una
* unidad de producto 2. Después de esto, calcular
* y mostrar la cantidad a pagar.
*/

int main(){
	int CODE1, UNITS1, CODE2, UNITS2;
	float PRICE1, PRICE2, TOTAL;


	scanf("%d %d %f", &CODE1, &UNITS1, &PRICE1);
	scanf("%d %d %f", &CODE2, &UNITS2, &PRICE2);

	TOTAL = (UNITS1*PRICE1)+(UNITS2*PRICE2);

	printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);
	return 0;
 }
