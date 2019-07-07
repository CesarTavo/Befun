#include <stdio.h>

/* Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.
 *
 * Input
 * The input contains an integer value N (0 < N < 13).
 *
 * Output
 * The output contains an integer value corresponding to the factorial of N.
 */

int main(){
	int num, i, fac;
	fac=1;
	scanf("%d", &num);

	for(i=1;i<=num;i++){
		fac=i*fac;
	}
	printf("%d\n", fac);
	return 0;
}
