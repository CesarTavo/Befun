#include <stdio.h>

/* Leer la hora de inicio y final de un juego, en horas y minutos 
 * (hora inicial, minuto inicial, hora final, minuto final). 
 * Luego mostrar la duración del juego, 
 * sabiendo que el juego puede comenzar en un día y terminar en el siguiente.
 * Obs.: El tiempo máximo de juego es de 24 horas 
 * y el tiempo mínimo es de 1 minuto.
*/

int main(){
	int  HORA_INICIO, HORA_TERMINO, MIN_INICIO, MIN_TERMINO, DURACION_HORA, DURACION_MIN;

	scanf("%d %d %d %d", &HORA_INICIO, &MIN_INICIO, &HORA_TERMINO, &MIN_TERMINO);	

	DURACION_HORA = HORA_TERMINO - HORA_INICIO;
	DURACION_MIN = MIN_TERMINO - MIN_INICIO;

	if(DURACION_HORA < 0){
	DURACION_HORA = 24 + DURACION_HORA;
	}	

	if(DURACION_MIN < 0){
	DURACION_MIN = 60 + DURACION_MIN;
	DURACION_HORA--;
	}

	if((HORA_INICIO == HORA_TERMINO) && (MIN_INICIO == MIN_TERMINO)){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		return 0;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", DURACION_HORA, DURACION_MIN);
	return 0;
}
