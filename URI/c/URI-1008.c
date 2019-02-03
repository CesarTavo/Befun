#include <stdio.h>

/* Escribe un programa que lea un número de empleado,
* su número de horas trabajadas en el mes y el
* monto recibido por hora. Imprimir el número de empleado y
* el salario que él/ella recibirá a fin de mes, con
* dos lugares decimales.
* No se olvide de imprimir los saltos
* de líneas después del resultado, de lo contrario, 
* recibirá “Presentation Error”.  
* No se olvide del espacio en blanco antes y
* después del signo igual y después de U$.
*/

int main(){
	int NUMBER, HORAS;
	float MONTO, SALARY;

	scanf("%d", &NUMBER);
	scanf("%d", &HORAS);
	scanf("%f", &MONTO);

	SALARY = HORAS*MONTO;

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);
 }
