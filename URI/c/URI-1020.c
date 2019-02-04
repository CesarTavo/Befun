#include <stdio.h>

/* Leer un entero, que corresponde a la edad
* de una persona (en días) e imprimirlo en
* años, meses y días, seguido del respectivo mensaje
* “ano(s)”, “mes(es)”, “dia(s)”. 
* Nota: Para facilitar el
* cálculo, considere al año con 365 días y al
* mes con 30. En los casos de prueba nunca
* habrá una situacion que permita 12 meses y algunos días
*, como 360, 363 ó 364. Este es
* sólo un ejercicio para plantear un simple razonamiento matemático.
*/

int main(){
	int AGE, YEARS, MONTHS, DAYS;
	
	scanf("%d", &AGE);

	YEARS = AGE/365;
	MONTHS = (AGE%365)/30;
	DAYS = (AGE%365)%30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", YEARS,MONTHS,DAYS);
	return 0;
}
