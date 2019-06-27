#include <stdio.h>

/* Escribir un programa que lea las coordenadas (X, Y) 
 * de un número indeterminado de puntos en el sistema Cartesiano. 
 * Para cada punto escribir el cuadrante al cual pertenece. 
 * El programa finaliza cuando al menos una de dos coordenadas es 
 * NULL (sin escribir ningún mensaje en esta situación).
 *
 * Entrada
 * La entrada contiene varios casos de pruebas. 
 * Cada caso de prueba contiene dos números enteros.
 *
 * Salida
 * Para cada caso de prueba, 
 * imprimir el cuadrante correspondiente al cual pertenecen las coordenadas, 
 * en portugues, como en el ejemplo.
 */

int main(){
	int x,y;
	while(1){
		scanf("%d %d", &x, &y);
		if(x == 0 || y == 0){
			break;
		}else if(x>0){
			if(y>0){
				printf("primeiro\n");
			}else{
				printf("quarto\n");
			}
		}else{
			if(y>0){
				printf("segundo\n");
			}else{
				printf("terceiro\n");
			}
		}
	}
	return 0;
}
