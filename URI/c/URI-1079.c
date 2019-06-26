#include <stdio.h>

/* Leer un número entero N, 
 * que representa el número de casos de prueba siguientes. 
 * Cada caso de prueba consta de tres números de punto flotante, 
 * cada uno con un dígito después del punto decimal. 
 * Imprima el promedio ponderado para cada uno de estos conjuntos 
 * de tres números, 
 * considerando que el primer número tiene peso 2, 
 * el segundo número tiene peso 3 
 * y el tercer número tiene peso 5.
 *
 * Entrada
 * El archivo de entrada contiene un número entero N en la primera línea. 
 * Cada una de las N líneas siguientes es un caso de prueba 
 * con tres números de punto flotante, 
 * cada uno con un dígito después del punto decimal.
 */

int main(){
	int num, i;
	float value1, value2, value3, result;

	scanf("%d", &num);
	for(i=0; i<num; i++){
		scanf("%f %f %f", &value1, &value2, &value3);
		result = (value1*0.2)+(value2*0.3)+(value3*0.5);
		printf("%.1f\n", result);
	}
	return 0;
}
