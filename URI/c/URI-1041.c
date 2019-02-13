#include <stdio.h>

/* Escriba un algoritmo que lea dos valores flotantes (x e y), 
 * que deben representar las coordenadas de un punto en un plano. 
 * A continuación, determine qué cuadrante pertenece el punto 
 * o si está sobre uno de los ejes cartesianos o el origen (x = y = 0).
 * Si el punto está en el origen, escriba el mensaje "Origem".
 * Si el punto está sobre el eje X, escriba "Eixo X", 
 * de lo contrario si el punto está sobre el eje Y, escriba "Eixo Y".
 * https://www.urionlinejudge.com.br/judge/es/problems/view/1041
*/

int main(){
	double X, Y;

	scanf("%lf %lf", &X, &Y);

	if(X == Y && Y == 0){
		printf("Origem\n");
	}else if(X > 0 && Y > 0){
		printf("Q1\n");
	}else if(X > 0 && Y < 0){
		printf("Q4\n");
	}else if(X < 0 && Y > 0){
		printf("Q2\n");
	}else if(X < 0 && Y < 0){
		printf("Q3\n");
	}else if(X == 0){
		printf("Eixo Y\n");
	}else if(Y == 0){
		printf("Eixo X\n");
	}
	return 0;
}


