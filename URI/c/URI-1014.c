#include <stdio.h>

/* Calcular el consumo promedio de un coche
* cuando se conoce la distancia total recorrida (en
* km) y el total de combustible gastado (en litros).
*/

int main(){
	int DISTANCE;
	float OIL, CONSUME; 

	scanf("%d %f", &DISTANCE,&OIL);
	
	CONSUME = DISTANCE/OIL;
	printf("%.3f km/l\n", CONSUME);

	return 0;
}
