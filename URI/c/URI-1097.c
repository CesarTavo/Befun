#include <stdio.h>

/* Haz un programa que imprima la secuencia como en el siguiente ejemplo.
 * I=1 J=7
 * I=1 J=6
 * I=1 J=5
 * I=3 J=9
 * I=3 J=8
 * I=3 J=7
 * ...
 * I=9 J=15
 * I=9 J=14
 * I=9 J=13
 */

int main(){
	int i,j, aux1, aux2;
	aux1=7;
	for(i=1;i<=9;i=i+2){
		for(aux2=1,j=aux1;aux2<=3;j--,aux2++){
			printf("I=%d J=%d\n", i,j);
		}
		aux1=aux1+2;
	}
	return 0;
}
