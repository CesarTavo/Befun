#include <stdio.h>

/* Leer dos valores de punto flotante
* de doble precisión A y B, correspondiente
* a dos notas de estudiantes. Luego de
* esto, calcular el promedio de los estudiantes,
* considerando que el peso de la nota
* A es 3.5 y el peso de
* la nota B es 7.5. Cada nota
* puede ser de cero a diez, siempre
* con un dígito después del punto decimal.
* No se olvide de imprimir el final
* de línea luego del resultado, de lo
* contrario recibirá “Presentation Error”. No se olvide
* del espacio antes y despues del signo igual. 
*/

int main(){
	float A, B, MEDIA;

	scanf("%f", &A);
	scanf("%f", &B);
	A = A*3.5;
	B = B*7.5;

	MEDIA = (A+B)/11;

	printf("MEDIA = %.5f\n", MEDIA);
 }
