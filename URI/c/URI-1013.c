#include <stdio.h>
#include <stdlib.h>

/* https://www.urionlinejudge.com.br/judge/es/problems/view/1013
* Hacer un programa que lea 3 valores enteros y 
* presente el mas grande seguido del mensaje "eh o maior". 
* Usando la siguiente fórmula.
*/

int main(){
	int A,B,C,MaiorAB,MaiorZC;

	scanf("%d %d %d", &A,&B,&C);

	MaiorAB = (A+B+abs(A-B))/2;
	MaiorZC = (MaiorAB+C+abs(MaiorAB-C))/2;

	printf("%d eh o maior\n",MaiorZC);
	return 0;
}
