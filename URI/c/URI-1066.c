#include <stdio.h>

/* Escriba un programa que lea 5 valor(s) enteros. 
 * Cuente cuantos de los valor(s) son pares, impares, postivos y negativos. 
 * Imprima la información siguiendo el ejemplo.
 *
 * Entrada
 * La entrada contiene 5 valor(s) enteros.
 *
 * Salida
 * Imprima un mensaje siguiendo el ejemplo con todas las letras en minúscula, 
 * indicando cuantos de los valor(s) son pares, impares, positivos y negativos.   
*/

int main(){
	int num;
	int i, positives = 0, negatives = 0, par = 0, impar = 0;

	for(i=0; i<5; i++){
		scanf("%d", &num);
		if(num > 0){
			positives ++;
		}else{
			if(num != 0){
			negatives ++;
			}
		}

		if(num % 2 == 0){
			par ++;
		}else{
			impar ++;
		}
	}

	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positives);
	printf("%d valor(es) negativo(s)\n", negatives);
	return 0;
}
