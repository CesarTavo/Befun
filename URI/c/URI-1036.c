#include <stdio.h>
#include <math.h>

/* Leer 3 números de punto flotante.
* Luego, imprimir las raíces de la fórmula de Bhaskara.
* FORMULA GENERAL pa'la banda: CHICHARRONERA
* Si es imposible calcular las raíces debido a
* una división por cero ó a la raíz
* cuadrada de un número negativo, presentar el
* mensaje “Impossivel calcular”.
*/

int main(){
	float A,B,C, DELTA, X1, X2;

	scanf("%f %f %f", &A,&B,&C);

	DELTA = B*B-(4*A*C);

	if (2*A != 0 && DELTA >= 0){
			X1 = (-B + sqrt(DELTA)) / (2*A);
			X2 = (-B - sqrt(DELTA)) / (2*A);

			printf("R1 = %.5f\n", X1);
			printf("R2 = %.5f\n", X2);
			return 0;
		}
	printf("Impossivel calcular\n");
	return 0;
}
