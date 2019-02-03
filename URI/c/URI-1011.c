#include <stdio.h>
# define PI 3.14159

/* Haga un programa que calcule y muestre
* el volumen de una esfera mediante un radio
* (R) dado. La fórmula para calcular dicho volumen
* es: (4/3) * pi * R3. Considere asignar
* a Pi el valor: 3.14159. Tip: Use (4/3.0)
* ó (4.0/3) en su fórmula, algunos lenguajes (incluyendo
* C++) asumen que la división entre dos enteros es otro entero. 
*/

int main(){
	double VOLUME;
	int RADIO;
	
	scanf("%d", &RADIO);
	
	VOLUME = (4.0/3) * (PI * RADIO * RADIO * RADIO);

	printf("VOLUME = %.3lf\n", VOLUME);	
	return 0;
 }
