#include <stdio.h>

/* Leer 4 valores enteros A, B, C y D.
* Luego, si B es mayor que C, D es mayor que A,
* la suma de C y D es mayor que la suma de 
* A y B, C y D son valores positivos y A es par, 
* escribir el mensaje “Valores aceitos” (Valores aceptados). 
* De lo contrario, escriba el mensaje “Valores nao aceitos” 
* (Valores no aceptados).
*/

int main(){
	int A,B,C,D, P;

	scanf("%d %d %d %d", &A,&B,&C,&D);
	P = A%2;
	
	if ( B > C && D > A && C+D > A+B && C > 0 && D > 0 && P == 0){
		printf("Valores aceitos\n");
		return 0;
		}
	 printf("Valores nao aceitos\n");
	return 0;
}
