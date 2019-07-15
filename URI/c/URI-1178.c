#include <stdio.h>

/* Read a number X. Put this X at the first position of an array N [100]. 
 * In each subsequent position (1 up to 99) put half of the number inserted at the previous position, 
 * according to the example below. Print all the vector N.
 */

int main(){
	int i,j;
	double number[100];
	scanf("%lf", &number[0]);

	printf("N[0] = %.4lf\n", number[0]);
	for(i=1;i<100;i++){
		number[i] = (number[i-1])/2;
		printf("N[%d] = %.4lf\n", i, number[i]);
	}
	return 0;
}
