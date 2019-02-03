#include <stdio.h>

/*  Leer dos valores enteros.
* Luego, calcular el producto entre ellos 
* y guardar el resultado en una variable llamada PROD. 
* Imprimir el resultado como se muestra en los ejemplos. 
* No olvides imprimir el final de línea 
* luego del resultado, de otra forma recibirás 
* “Presentation Error”. 
*/

int main(){
	int A, B, PROD;

	scanf("%d", &A);
	scanf("%d", &B);
	PROD = A*B;

	printf("PROD = %d\n", PROD);
 }
