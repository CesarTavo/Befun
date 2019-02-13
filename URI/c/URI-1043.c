#include <stdio.h>

/* Lea 3 números del tipo punto flotante (A, B y C) y
 * verifique si es posible realizar un triángulo con ellos.
 * Si esto es posible, calcular el perímetro del triángulo y
 * mostrar el siguiente mensaje: 
 * Perimetro = XX.X 
 * Si esto no es posible, calcular el área de un trapecio, 
 * cuyas bases son A, B y su altura es C, y mostrar el siguiente mensaje: 
 * Area = XX.X
*/

int main(){
	double A, B, C;

	scanf("%lf %lf %lf", &A, &B, &C);

	if((A + B) > C && (A+C) > B && (B+C) > A){
		printf("Perimetro = %.1lf\n", A+B+C);
	} else{
		printf("Area = %.1lf\n", C*((A+B)/2));
	}
	return 0;
}

