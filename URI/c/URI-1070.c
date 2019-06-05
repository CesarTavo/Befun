#include <stdio.h>

/* Leer una valor entero X e imprimir los 6 números impares consecutivos desde X, 
 * un valor por línea, incluyendo X si es el caso.
 *
 * Entrada
 * La entrada tendrá un valor entero positivo.
 *
 * Salida
 * La salida tendrá una salida de seis números impares consecutivos. 
 */

int main(){
	int num;
	int i=0;

	scanf("%d", &num);
	if(num % 2 == 0){
		for(i=num+1; i<=(num+11); i+=2){
			printf("%d\n", i);
		}
	}else{
		for(i=num; i<=(num+10); i+=2){
			printf("%d\n", i);
			
		}
	}

	return 0;
}
