#include <stdio.h>

/* Recibir 3 números double (A, B and C) 
 * que representan los lados de un triángulo y ordenarlos de manera decreciente, 
 * de tal manera que el lado A sea el mas grande de los tres lados. 
 * A continuación, determinar el tipo de triángulo que pueden formar, 
 * basado en los siguientes casos, mostrando siempre el mensaje apropiado:
 *  si A ≥ B + C, mostrar el mensaje: NAO FORMA TRIANGULO
 *  si A^2 = B^2 + C^2, mostrar el mensaje: TRIANGULO RETANGULO
 *  si A^2 > B^2 + C^2, mostrar el mensaje: TRIANGULO OBTUSANGULO
 *  si A^2 < B^2 + C^2, mostrar el mensaje: TRIANGULO ACUTANGULO
 *  si los tres lados son del mismo tamaño, mostrar el mensaje: TRIANGULO EQUILATERO
 *  si sólo dos lados son iguales y el tercero es diferente, mostrar el mensaje: TRIANGULO ISOSCELES
 */

int main(){
	double A, B, C, TEMPORAL;
	scanf("%lf %lf %lf", &A, &B, &C);

	if(A < B){
	TEMPORAL = A;
	A = B;
	B = TEMPORAL;
	}
	if(B < C){
	TEMPORAL = B;
	B = C;
	C = TEMPORAL;
	}
	if(A < B){
	TEMPORAL = A;
	A = B;
	B = TEMPORAL;
	}

//	printf("\n%lf %lf %lf\n", A, B, C);

	if(A < 0 || B < 0 || C < 0){
		return 0;
	}

	if (A > B && A > C){
		
	}
	if(A >= B + C){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	} else if(A*A == B*B + C*C){
		printf("TRIANGULO RETANGULO\n");
	} else if(A*A > B*B + C*C){
		printf("TRIANGULO OBTUSANGULO\n");
	} else if(A*A < B*B + C*C){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(A == B && B == C){
		printf("TRIANGULO EQUILATERO\n");
	} else if(A == B || B == C){
		printf("TRIANGULO ISOSCELES\n");
		
	} 
	return 0;	
}
