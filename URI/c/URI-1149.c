#include <stdio.h>

/* Write an algorithm to read a value A and a value N. 
 * Print the sum of N numbers from A (inclusive). 
 * While N is negative or ZERO, 
 * a new N (only N) must be read. 
 * All input values are in the same line.
 *
 * Input
 * The input contains only integer values, can be positive or negative.
 *
 * Output
 * The output contains only an integer value.
 */

int main(){
	int x,y,i,aux=0;

	scanf("%d %d", &x, &y);
	while(y<=0){
		scanf("%d", &y);
	}

	for(i=1,x;i<=y;i++,x++){
		aux+=x;
	}
	printf("%d\n", aux);
	return 0;

}
