#include <stdio.h>

/* Escribir un programa que lea dos números enteros, X e Y. 
 * Imprimir todos los números entre X e Y que, 
 * dividiéndolo por 5, el resto sea igual a 2 o 3.
 *
 * Entrada
 * El archivo de entrada contiene dos valores positivos enteros cualquiera, no necesariamente en orden ascendente.
 *
 * Salida
 * Imprimir todos los números según la descripción anterior, siempre en orden ascendente.
 */

int main(){
	int x, y, i;
	scanf("%d %d", &x, &y);

	if(x<y){
		i=x+1;
		for(i; i<y; i++){
			if(i%5==2 || i%5==3){
				printf("%d\n", i);
			}
		}
	}else if(y<x){
		i=y+1;
		for(i;i<x;i++){
			if(i%5==2 || i%5==3){
				printf("%d\n", i);
			}
		}
	}

	return 0;
}
