#include <stdio.h>

/* Leer un entero N. 
 * Imprimir todos los números entre 1 y 10000, 
 * que dividido por N dará el resto igual a 2.
 *
 * Entrada
 * La entrada es un número entero N (N < 10000)
 *
 * Salida
 * Imprimir todos los números entre 1 y 10000, 
 * que dividido por N dará resto igual a 2, uno por línea.
 */

int main(){
	int num, i;
	scanf("%d", &num);
	for(i=1; i<10000; i++){
		if(i%num == 2){
			printf("%d\n", i);
		}
	}
	return 0;
}
