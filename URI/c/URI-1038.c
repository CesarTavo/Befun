#include <stdio.h>

/* Usando la siguiente tabla, escribe un programa que lea el código 
* y la cantidad de un producto. Luego, imprime el valor a pagar.
* Este es un programa muy simple que tiene solo la intención de practicar 
* los comandos de selección.
*
* TABLA:
* CODE 	| SPECIFICATION	  | PRICE
* 1	| Cachorro Quente | R$ 4.00
* 2	| X-Salada	  | R$ 4.50
* 3	| X-Bacon	  | R$ 5.00
* 4 	| Torrada simples | R$ 2.00
* 5	| Refrigerante 	  | R$ 1.50
*/

int main(){
	int PRODUCT,CANTIDAD;

	scanf("%d %d", &PRODUCT,&CANTIDAD);
	
	switch(PRODUCT){
		case 1:
			printf("Total: R$ %.2f\n", CANTIDAD*4.00);
		break;
		case 2:
			printf("Total: R$ %.2f\n", CANTIDAD*4.50);
		break;
		case 3:
			printf("Total: R$ %.2f\n", CANTIDAD*5.00);
		break;
		case 4:
			printf("Total: R$ %.2f\n", CANTIDAD*2.00);
		break;
		case 5:
			printf("Total: R$ %.2f\n", CANTIDAD*1.50);
		break;
	}
}


