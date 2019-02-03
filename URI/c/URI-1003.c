#include <stdio.h>

/* Leer dos valores enteros, en este caso,
* las variables A y B. 
* Luego, calcule la suma entre estos 
* y asígnelo a otra variable SOMA. 
* Muestre el valor de esta variable.
*/

int main(){
	int A, B, SOMA;

	scanf("%d", &A);
	scanf("%d", &B);
	SOMA = A+B;

	printf("SOMA = %d\n", SOMA);
}
