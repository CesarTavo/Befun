#include <stdio.h>

/* Leer cuatro valores enteros A, B, C y D.
* Calcular e imprimir la diferencia entre el producto de 
* A y B, y el producto de C y D (A * B - C * D). 
*/

int main(){
	int A, B, C, D, DIFERENCIA;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);

	DIFERENCIA = (A*B)-(C*D);

	printf("DIFERENCA = %d\n", DIFERENCIA);
 }
