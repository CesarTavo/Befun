#include <stdio.h>

/* Read an integer N and compute all its divisors.
 *
 * Input
 * The input file contains an integer value.
 *
 * Output
 * Write all positive divisors of N, one value per line.
 */

int main(){
	int num, i;

	scanf("%d", &num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("%d\n", i);
		}
	}
	return 0;
}
