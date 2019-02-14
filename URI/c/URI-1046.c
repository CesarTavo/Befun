#include <stdio.h>

/* Leer el tiempo de comienzo y el tiempo del final del juego, en horas.
 * Calcular la duración del juego, sabiendo que el juego comienza un día 
 * y finaliza al otro día, con un máximo de duración de 24 horas. 
 * El mensaje deberá ser mostrado en portugues “O JOGO DUROU X HORA(S)” 
 * que significa “EL JUEGO DURÓ X HORA(S)”
*/

int main(){
	int  HORA_INICIO, HORA_TERMINO, DURACION;

	scanf("%d %d", &HORA_INICIO, &HORA_TERMINO);	

	DURACION = HORA_TERMINO - HORA_INICIO;


	if(HORA_INICIO == HORA_TERMINO){
		printf("O JOGO DUROU 24 HORA(S)\n");
		return 0;
	}
	else if(DURACION < 0){
		printf("O JOGO DUROU %d HORA(S)\n", DURACION = 24 + DURACION);
		return 0;
	}
	printf("O JOGO DUROU %d HORA(S)\n", DURACION);
	return 0;
}


