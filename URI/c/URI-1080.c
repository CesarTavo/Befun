#include <stdio.h>

/* Leer 100 números enteros. 
 * Imprimir el valor leído más alto y la posición de entrada.
 *
 * Entrada
 * El archivo de entrada contiene 100 números enteros positivos distintos.
 *
 * Salida
 * Imprimir el número más alto leído y la posición de entrada de ese valor,
 * según el ejemplo dado.
 */

int main(){
	int num, i, mayor, pos;
	mayor = 0;
	for(i=1; i<=100; i++){
		scanf("%d", &num);
		if(num > mayor){
			mayor = num;
			pos = i;
		}
	}
	printf("%d\n%d\n", mayor, pos);
}
