#include <stdio.h>

/* Haz un programa que imprima la secuencia como en el siguiente ejemplo.
 * I=1 J=60
 * I=4 J=55
 * I=7 J=50
 * ...
 * I=? J=0
 */

int main(){
	int i, j;
	for(i=1,j=60; j>=0; j=j-5,i=i+3){
		printf("I=%d J=%d\n", i,j);
	}
	return 0;
}
