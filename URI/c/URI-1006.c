#include <stdio.h>

/*  Leer tres valores (variables A, B y C),
* que son las tres notas de estudiantes. Entonces, calcule
* el promedio, considerando que la nota A tiene peso
* 2, la nota B tiene peso 3 y la nota C tiene peso 5.
* Cosiderar que cada nota puede ser del 0 al 10.0, siempre con un punto
* decimal.
*/

int main(){
	float A, B, C, MEDIA;

	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	A = A*2;
	B = B*3;
	C = C*5;

	MEDIA = (A+B+C)/10;

	printf("MEDIA = %.1f\n", MEDIA);
 }
