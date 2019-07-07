#include <stdio.h>

/* Write an algorithm to calculate and write the value of S, S being given by:
 * S = 1 + (1/2) + (1/3) + … + (1/100)
 */

int main(){
	float sum=0, i, div;

	for(i=1;i<=100;i++){
		div=1/i;
		sum+=div;
	}

	printf("%.2lf\n", sum);
	return 0;
}
