#include <stdio.h>
#define PI 3.14159

/* Escriba un programa que lea tres valores de punto flotante: 
* A, B y C. Luego, calcular y mostrar:
* a) El área del triángulo rectángulo de base A y altura C.
* b) El área del círculo de radio C (Pi = 3.14159).
* c) El área del trapecio el cual tiene A y B como bases, y C como altura.
* d) El área del cuadrado de lado B.
* e) El área del rectángulo de lados A y B. 
*/

int main(){
	float A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;

	scanf("%f %f %f", &A,&B,&C);

	TRIANGULO = (A*C)/2;
	CIRCULO = PI*C*C;
	TRAPEZIO = C*((A+B)/2);
	QUADRADO = B*B;
	RETANGULO = A*B;

	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);

	return 0;
}
