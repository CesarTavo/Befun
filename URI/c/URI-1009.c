#include <stdio.h>

/* Escriba un programa que lea el nombre de un vendedor,
* su salario fijo y el total de las ventas realizadas por
* él en el mes (en dinero). Considerando que el vendedor recibe
* un 15% de los productos vendidos, escribir el salario final (total)
* de cada vendedor a fin de mes, con dos cifras decimales.
*
* - No olvide de imprimir un final de linea luego del resultado,
* de otra forma recibirá “Presentation Error”.
* - No olvide los espacios en blanco.
*/

int main(){
	char name[20];
	double SALARY, VENTAS, TOTAL;

	scanf("%s", name);
	scanf("%lf", &SALARY);
	scanf("%lf", &VENTAS);

	TOTAL = SALARY+(VENTAS*15)/100;

	printf("TOTAL = R$ %.2f\n", TOTAL);
	return 0;
 }
