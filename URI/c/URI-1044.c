#include <stdio.h>

/*  Leer dos valores enteros (A y B). 
 *  Luego, el programa deberá imprimir el mensaje 
 *  "Sao Multiplos" (son múltiplos) o "Nao sao Multiplos" (no son múltiplos), 
 *  dependiendo de los números leidos.
*/

int main(){
	int A, B;
	scanf("%d %d", &A, &B);

	if((A%B) == 0 || (B%A) == 0){
		printf("Sao Multiplos\n");
	} else{
	printf("Nao sao Multiplos\n");
	}
	return 0;
}
