#include <stdio.h>

/* Lea un valor entero N. 
 * Luego, lea estos N valores e imprima un mensaje para cada uno de los valores 
 * diciendo si este valor es impar, par, positivo o negativo. 
 * En caso del cero (0), aunque la correcta descripción debería ser "PAR NULO",
 * porque por definición el cero es par, 
 * tu programa debe imprimir solamente "NULL", sin comillas.
 *
 * Entrada
 * La primera linea de entrada es un entero N (N < 10000), 
 * que indica el número total de casos de prueba. 
 * Cada caso es un número entero X (-107 < X <107)..
 *
 * Salida
 * Para cada caso de prueba, imprimir el correspondiente mensaje, 
 * de acuerdo al siguiente ejemplo. 
 * Todos los mensajes deben ser impresos en letras mayúsculas y 
 * siempre debe tener un espacio entre las dos palabras en la misma línea.
 */

int main(){
	int num, i, value;
	scanf("%d", &num);
	for(i=0; i<num; i++){
		scanf("%d", &value);
		if(value == 0){
			printf("NULL\n");
		}else if(value > 0){
			if(value%2 == 0){
				printf("EVEN POSITIVE\n");
			}else{
				printf("ODD POSITIVE\n");
			}
		}else{
			if(value%2 == 0){
				printf("EVEN NEGATIVE\n");
			}else{
				printf("ODD NEGATIVE\n");
			}
		}
	}
	return 0;
}



