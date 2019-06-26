#include <stdio.h>

/* María recién empieza como una estudiante graduada en una escuela médica 
 * y ella necesita tu ayuda para organizar un experimento 
 * del laboratorio del que ella es responsable. 
 * Ella quiere saber, 
 * al final del año, cuantos animales fueron usados en este laboratorio 
 * y el porcentaje de cada tipo de animales usados en absoluto.
 *
 * Este laboratorio usa en particular tres tipos de animales: 
 * ranas, ratas y conejos. 
 * Para obtener esta información, 
 * se sabe exactamente el número de experimentos que se realizaron, 
 * el tipo y la cantidad de cada animal que se utiliza en cada experimento.
 *
 * Entradas
 * La primera línea contiene un entero N que indica 
 * el número de casos de prueba que lo preceden. 
 * Cada caso de prueba contiene un entero Cantidad (1 ≤ Cantidad ≤ 15) 
 * que representa la cantidad de animales usados 
 * y un caracter Tipo ('C', 'R' o 'S'), que indica el tipo de animal:
 * - C: Coelho (conejo en portuguese)
 *   - R: Rato (rata  en portuguese)
 *   - S: Sapo (rana en portuguese)
 *
 *   Salidas
 *   Imprime el total de animales usados, 
 *   el total de cada tipo de animal y el porcentaje de cada uno 
 *   en relación al total de animales usados. 
 *   El porcentaje debe ser impreso con dos dígitos después del punto decimal.
 */

int main(){
	int cases, i, num, c, r, s;
	double percent, total;
	char animal;
	c = 0;
	r = 0;
	s = 0;
	total = 0;

	scanf("%d", &cases);

	for(i=0; i<cases; i++){
		scanf("%d %c", &num, &animal);
		if(num <= 15 && num >= 0){
			switch(animal){
				case 'C':
					c += num;
					total += num;
					break;
				case 'R':
					r += num;
					total += num;
					break;
				case 'S':
					s += num;
					total += num;
					break;
			}
		}
	}
	printf("Total: %.0f cobaias\n", total);
	printf("Total de coelhos: %d\n", c);
	printf("Total de ratos: %d\n", r);
	printf("Total de sapos: %d\n", s);
	printf("Percentual de coelhos: %.2f %c\n", percent = (c*100)/total, 37);
	printf("Percentual de ratos: %.2f %c\n", percent = (r*100)/total, 37);
	printf("Percentual de sapos: %.2f %c\n", percent = (s*100)/total, 37);
}
