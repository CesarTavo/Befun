#include <stdio.h>

/* Escribe un programa que lea dos números X e Y 
 * e imprima el resultado de dividir X por Y. 
 * Si no es posible, imprimir el mensaje "divisao impossivel".
 *
 * Entrada
 * La entrada contiene un numero entero N. 
 * Este N es la cantidad de pares de números enteros X e Y leídos 
 * (dividendo y divisor).
 *
 * Salida
 * Para cada caso de prueba imprimir el resultado 
 * de la división con un digito después del punto decimal, 
 * o “divisao impossivel” si es imposible realizar el cálculo.
 */

int main(){
	int cases, i, num1, num2;
	scanf("%d", &cases);
	for(i=0; i<cases; i++){
		scanf("%d %d", &num1, &num2);
		if(num2==0){
			printf("divisao impossivel\n");
		}else printf("%.1lf\n", num1/(num2*1.0));
	}
	return 0;
}
