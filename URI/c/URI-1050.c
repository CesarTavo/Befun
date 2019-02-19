#include <stdio.h>

/* Lea un número entero que corresponda al número de código de área para marcación telefónica.
 *  A continuación, imprima el destino de acuerdo con la siguiente tabla:
 * DDD	| Destination
 * 61 	| Brasilia
 * 71 	| Salvador
 * 11	| Sao Paulo
 * 21	| Rio de Janeiro
 * 32	| Juiz de Fora
 * 19	| Campinas
 * 27	| Vitoria
 * 31	| Belo Horizonte
 * Si el número de entrada no se encuentra en la tabla anterior,
 * la salida debe ser:
 * DDD nao cadastrado
 * Que significa “DDD no encontrado” in Portugues.
 */

int main(){
	int CODE;

	scanf("%d", &CODE);

	switch(CODE){
		case 61:
			printf("Brasilia\n");
			break;
		case 71:
			printf("Salvador\n");
			break;
		case 11:
			printf("Sao Paulo\n");
			break;
		case 21:
			printf("Rio de Janeiro\n");
			break;
		case 32:
			printf("Juiz de Fora\n");
			break;
		case 19:
			printf("Campinas\n");
			break;
		case 27:
			printf("Vitoria\n");
			break;
		case 31:
			printf("Belo Horizonte\n");
			break;
		default:
			printf("DDD nao cadastrado\n");
	}
}
