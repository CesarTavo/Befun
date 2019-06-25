#include <stdio.h>

/*Leer un entero N. 
 * Imprimir el cuadrado para cada uno de los valores pares 
 * desde 1 hasta N incluyendo N si es el caso.
 *
 * Entrada
 * La entrada contiene un entero N (5 < N < 2000).
 *
 * Salida
 * Imprimir el cuadrado de cada uno de los valores pares desde 1 hasta N, 
 */

int main(){
	int num, i;
	scanf("%d", &num);
	if(5 < num && num < 2000){
		for(i=2; i<= num; i = i+2){
			printf("%d^2 = %d\n", i, i*i);
		}
	}
	return 0;
}
