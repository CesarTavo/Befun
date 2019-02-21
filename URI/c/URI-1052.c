#include <stdio.h>

/* Lea un número entero entre 1 y 12, inclusive. Imprima el mes del año correspondiente a este número,
 *  en inglés y con la primera letra en mayúscula.
 */

int main(){
	int MES;

	scanf("%d", &MES);
	switch(MES){
		case 1:
			printf("January\n");
			break;
		case 2:
			printf("February\n");
			break;
		case 3:
			printf("March\n");
			break;
		case 4:
			printf("April\n");
			break;
		case 5:
			printf("May\n");
			break;
		case 6:
			printf("June\n");
			break;
		case 7:
			printf("July\n");
			break;
		case 8:
			printf("August\n");
			break;
		case 9:
			printf("September\n");
			break;
		case 10:
			printf("October\n");
			break;
		case 11:
			printf("November\n");
			break;
		case 12:
			printf("December\n");
			break;
		default:
		       	break;
	}
	return 0;
}
