#include <stdio.h>

/* Dos autos (X e Y) parten en la misma dirección.
* El auto X parte con una velocidad constante
* de 60 km/h y el auto Y parte con velocidad constante
* de 90 km/h. En una hora (60 minutos), el auto Y
* se separa una distancia de 30 kilómetros del auto X,
* en otras palabras, se aleja un kilómetro cada 2 minutos.
* Leer la distancia (en kilómetros) y calcular que tiempo le
* lleva (en minutos) al auto Y tomar esa distancia en
* relación con el otro auto.  
* Solucion: Después de una hora el coche Y va 30 minutos
* adelante del coche X, por lo que 
* 60 minutos son 90-60 Xminutos igual a la distancia
* Despejando X obtenemos que X = (60 * Distancia)/30
*/

int main(){
	int DISTANCE, TIME;

	scanf("%d", &DISTANCE);

	TIME = (60 * DISTANCE)/30;

	printf("%d minutos\n", TIME);
	return 0;
}
