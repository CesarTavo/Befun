#include <stdio.h>

/* Haz un programa que lea cinco valores enteros. 
 * Cuente cuantos de estos valores son pares 
 * e imprima ésta información como muestra el ejemplo.
 *
 * Entrada
 * La entrada serán 5 números enteros.
 *
 * Salida
 * Imprima un mensaje como en el siguiente ejemplo, 
 * con todas las letras en minúsculas, 
 * indicando cuantos números pares se ingresaron.
 */

int main(){
	int numeros[4];
	int i, average;

	for(i=0; i<5; i++){
		scanf("%d", &numeros[i]);
		if(numeros[i] % 2 == 0){
			average ++;
		}
	}

	printf("%d valores pares\n", average);
	return 0;
}
