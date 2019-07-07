#include <stdio.h>

/* Write an algorithm to calculate and write the value of S, S being given by:
 * S = 1 + (3/2) + (5/4) + (7/8) + ... + (39/?)
 */

int main(){
	float sum=0, i, j, div;

	for(i=1,j=1;i<=39;i=i+2,j=j*2){
		div=i/j;
		sum+=div;
	}

	printf("%.2lf\n", sum);
	return 0;
}
