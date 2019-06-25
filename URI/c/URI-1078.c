#include <stdio.h>

/* Leer un entero N (2 < N < 1000) y mostrar su tabla de multiplicar.
 * 1 x N = N 2 x N = 2N ... 10 x N = 10N
 *
 * Entrada
 * La entrada es un entero N (1 < N < 1000).
 *
 * Salida
 * Mostrar la tabla de multiplicar de N. Como se muestra en el ejemplo.
 */

int main(){
	int num, i;
	scanf("%d", &num);
	if(1 < num && num < 1000){
		for(i=1; i<=10; i++){
			printf("%d x %d = %d\n", i, num, i*num);
		}
		return 0;
	}
	return 0;
}
