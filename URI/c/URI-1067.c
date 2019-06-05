#include <stdio.h>

/* Leer un valor entero X (1 <= X <= 1000). 
 * Entonces imprima los números impares del 1 hasta X, 
 * cada uno en una línea, incluyendo X si es el caso.
 *
 * Entrada
 * La entrada tendrá un valor entero.
 *
 * Salida
 * Imprimir todos los valores impares entre 1 y X, 
 * incluyendo X si es el caso.
 */

int main(){
	int num;
	int i;

	scanf("%d", &num);
	for(i=1; i<=num; i++){
		if(num >= 1 && (i % 2 != 0)){
			printf("%d\n", i);
		}
	}

	return 0;
}
