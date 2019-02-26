#include <stdio.h>

/* Pedro está organizando un evento en su Universidad. 
 * El evento será en el mes de abril, comenzando y terminando en dicho mes. 
 * El problema es: Pedro quiere calcular la duración del evento en segundos, 
 * sabiendo obviamente el comienzo y el final del mismo.
 * 
 * Sabes que el evento puede durar de unos pocos segundos a algunos días, 
 * así que debes ayudar a Pedro a calcular el tiempo total correspondiente a la duración del evento.
 * 
 * Entrada
 * La primera línea de la entrada contiene información sobre el día de inicio del evento en el formato "Dia xx". 
 * La siguiente línea contiene la hora de inicio del evento en el formato presentado en la entrada de muestra. 
 * Luego, 2 líneas de entrada con el mismo formato, correspondientes al final del evento.
 *
 * Salida
 * Su programa debe imprimir la siguiente salida, una información por línea, 
 * considerando que si cualquier información es nula por ejemplo, 
 * el número 0 debe imprimirse en lugar de W, X, Y o Z:
 * 
 * W DAY(s)
 * X hora(s)
 * Y minuto(s)
 * Z segundo(s)
 */

int main(){
	int STR_DAY, STR_HOUR, STR_MIN, STR_SEG, END_DAY, END_HOUR, END_MIN, END_SEG;
	char DAY[4], DOT[2];

	scanf("%s%d", DAY, &STR_DAY);
	scanf("%d%s%d%s%d", &STR_HOUR, DOT, &STR_MIN, DOT, &STR_SEG);
	scanf("%s%d", DAY, &END_DAY);
	scanf("%d%s%d%s%d", &END_HOUR, DOT, &END_MIN, DOT, &END_SEG);

}
