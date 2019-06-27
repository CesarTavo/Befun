#include <stdio.h>

/* Lea un número indeterminado de pares de enteros. 
 * Escriba un mensaje para cada par, 
 * indicando si estos dos números están en orden ascendente o descendente.
 *
 * Entrada
 * La entrada cosnta de varios casos de prueba. 
 * Cada caso contiene dos enteros X e Y. 
 * La entrada finaliza cuando X = Y.
 *
 * Salida
 * Para cada caso de prueba imprima "Crescente" (creciente en portugués), 
 * si los valores de X e Y están en orden ascendente, 
 * caso contrario imprima "Decrescente" (decreciente en portugués).
 */

int main(){
	int num1, num2;
	while(1){
		scanf("%d %d", &num1, &num2);
		if(num1==num2){
			break;
		}if(num1<num2){
			printf("Crescente\n");
		}else{
			printf("Decrescente\n");
		}
	}
	return 0;
}
