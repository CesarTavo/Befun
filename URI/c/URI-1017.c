#include <stdio.h>

/* Juancito quiere calcular y mostrar la
* cantidad de litros de combustible gastado
* en un viaje, con un auto que hace 12 Km/L. 
* Para eso, le gustaría que lo ayudes
* a través de un programa sencillo. 
* Para realizar el cálculo, tienes que leer
* el tiempo (en horas) y la
* velocidad media (en Km/h) del viaje.
* De esta forma se puede obtener la distancia,
* y luego, calcular la cantidad de litros necesarios. 
* Mostrar el valor con tres dígitos luego del punto decimal.
*/

int main(){
	int HOURS, KM;
	float EXPEND;

	scanf("%d %d", &HOURS,&KM);

	EXPEND = (KM/12.0)*HOURS;

	printf("%.3f\n", EXPEND);
	return 0;
}
