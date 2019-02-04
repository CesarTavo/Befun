#include <stdio.h>

/* Debes hacer un programa que lea un número de punto flotante
* e imprimir un mensaje diciendo en cuál de los siguientes intervalos el
* número pertenece: [0,25] (25,50], (50,75], (75,100).
* Número es menor que cero o mayor que 100, el programa
* debe imprimir el mensaje "Fora de intervalo" que significa
* "Fuera de intervalo".  
* El símbolo '(' representa mayor que, por ejemplo:
* [0,25] indica números entre 0 y 25.0000, incluyendo ambos.
* (25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.
*/

int main(){
	float NUMBER;
	scanf("%f", &NUMBER);

	if (NUMBER >= 0 && NUMBER <= 100){
		if(NUMBER <= 25){
			printf("Intervalo [0,25]\n");
			return 0;
			}  else if(NUMBER <= 50){
				printf("Intervalo (25,50]\n");
				return 0;
				} else if(NUMBER <= 75){
					printf("Intervalo (50,75]\n");
					return 0;
					}  else if(NUMBER <= 100){
						printf("Intervalo (75,100]\n");
						return 0;
						}
		}
	printf("Fora de intervalo\n");
	return 0;
}
