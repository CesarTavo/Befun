#include <stdio.h>

/* En un país imaginario llamado Lisarb, toda la gente está muy feliz de pagar sus impuestos porque 
 * saben que no existen políticos corruptos y los impuestos se utilizan para beneficiar a la población, 
 * sin ninguna apropiación indebida. La moneda de este país es el Rombus, cuyo símbolo es R$.
 * Lea un valor con 2 dígitos después del punto decimal, equivalente al salario de un habitante de Lisarb.
 *  Luego imprima el valor que esta persona debe pagar de impuestos, de acuerdo con la siguiente tabla.
 *
 *
 * | Salary                        | Taxes         |
 * | --				   | --            |
 * | from 0.00 to R$2,000.00       | Without taxes |
 * | from R$2,000.01 to R$3,000.00 | 8%            |
 * | from R$3,000.01 to R$4,500.00 | 18%           |
 * | more than R$4,500.00          | 28%           |
 *
 * Recuerde, si el salario es de R$ 3,002.00 por ejemplo, la tasa del 8% es sólo sobre R$ 1.000,00, 
 * porque el salario de R$ 0,00 a R$ 2,000.00 es libre de impuestos. 
 * En el siguiente ejemplo, la tasa total es de 8% sobre R$ 1000,00 + 18% sobre R$ 2,00, resultando R$ 80,36. 
 * La respuesta debe imprimirse con 2 dígitos después del punto decimal.i
 * 
 * Entrada
 * La entrada contiene sólo un número de punto flotante, con 2 dígitos después del punto decimal.
 * 
 * Salida
 * Imprima el mensaje "R$" seguido de un espacio en blanco y el impuesto total a pagar,
 * con dos dígitos después del punto decimal. Si el valor es hasta 2000, imprima el mensaje "Isento".
 */

int main(){
	double SALARY;

	scanf("%lf", &SALARY);

	if(SALARY >= 0.00 && SALARY <= 2000.00){
		printf("Isento\n");
	} else if(SALARY > 2000.00 && SALARY <= 3000.00){
		printf("R$ %.2lf\n", SALARY = ((SALARY - 2000.00) * 0.08));
	} else if(SALARY > 3000.00 && SALARY <= 4500.00){
		printf("R$ %.2lf\n", SALARY = ((SALARY - 3000.00) * 0.18 + 1000.00 * 0.08));
	} else if(SALARY > 4500.00){
		printf("R$ %.2lf\n", SALARY = ((SALARY - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08));
	}
	return 0;
}
