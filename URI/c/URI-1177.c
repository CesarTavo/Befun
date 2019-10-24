#include <stdio.h>

/* Write a program that reads a number T and fill a vector N[1000] 
 * with the numbers from 0 to T-1 repeated times
 */

int main(){
	int number, arr[1000], i, j;

	scanf("%d", &number);
	for(i=0,j=0;i<1000;i++,j++){
		if(j==number)
			j=0;
		printf("N[%d] = %d\n", i,j);
	}
	return 0;
}
