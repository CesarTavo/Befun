#include <stdio.h>

/* Haz un programa que imprima la secuencia como en el siguiente ejemplo.
 * I=1 J=7
 * I=1 J=6
 * I=1 J=5
 * I=3 J=7
 * I=3 J=6
 * I=3 J=5
 * ...
 * I=9 J=7
 * I=9 J=6
 * I=9 J=5
 */

int main(){
	int i,j;
	for(i=1;i<=9;i=i+2){
		for(j=7; j>=5; j--){
			printf("I=%d J=%d\n", i, j);
		}
	}
	return 0;
}
