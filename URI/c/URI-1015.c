#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* https://www.urionlinejudge.com.br/judge/es/problems/view/1015
* Leer los cuatro valores correspondientes
* a las coordenadas x e y
* de dos puntos en
* el plano, p1 (x1, y1) y p2 (x2, y2) y
* calcular la distancia entre ellos,
* mostrando cuatro decimales después del
* punto, de acuerdo a la fórmula: 
* Distancia = sqrt((x2 - x1)^2 + (y2 - y1)^2)
*/

int main(){
	double X1,X2,Y1,Y2,DISTANCE;
	
	scanf("%lf %lf", &X1,&Y1);
	scanf("%lf %lf", &X2,&Y2);

	DISTANCE = sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));

	printf("%.4lf\n", DISTANCE);
	return 0;
}
