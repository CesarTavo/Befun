#include <stdio.h>

/*Leer un valor entero, que es la duración en segundos
* de un evento realizado en una fábrica, e informarlo expresado en
* horas:minutos:segundos.
*/

int main(){
	int TIME, HOURS, MINUTES, SECONDS;
		
	scanf("%d", &TIME);
	
	HOURS = TIME/3600;
	MINUTES = (TIME%3600)/60;
	SECONDS = TIME%60;

	printf("%d:%d:%d\n", HOURS,MINUTES,SECONDS);
	return 0;
}
