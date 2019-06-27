#include <stdio.h>

/* Lea un número indeterminado de pares de valores M y N 
 * (pare cuando cualquiera de estos valores sea igual ó menor a cero). 
 * Por cada par, dé como salida la secuencia desde el menor hasta el mayor 
 * (incluyendo ambos) y la suma de los enteros consecutivos entre ellos 
 * (incluyendo ambos).
 *
 * Entrada
 * La entrada contiene pares de valores enteros M y N. 
 * La última línea del archivo contiene un número negativo, cero, ó ambos.
 *
 * Salida
 * Por cada par de números,
 * muestre la secuencia desde el más chico al más grande, 
 * y la suma de estos valores, como se muestra abajo.
 */

int main(){
	int num1, num2, sum;
	while(1){
		scanf("%d %d", &num1, &num2);
		sum=0;
		if(num1 <= 0 || num2 <= 0){
			break;
		}else{
			if(num1<num2){
				for(num1;num1<=num2;num1++){
					printf("%d ", num1);
					sum+=num1;
				}
				printf("Sum=%d\n", sum);
			}else{
				for(num2;num2<=num1;num2++){
					printf("%d ", num2);
					sum+=num2;
				}
				printf("Sum=%d\n", sum);
			}
		}
	}
	return 0;
}
