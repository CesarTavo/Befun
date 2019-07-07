#include <stdio.h>

/* The program must read an integer X indefinite times (stop when X=0). 
 * For each X, print the sum of five consecutive even numbers from X, 
 * including it if X is even. 
 * If the input number is 4, for example, 
 * the output must be 40, that is the result of the operation: 4+6+8+10+12. 
 * If the input number is 11, for example, the output must be 80, 
 * that is the result of 12+14+16+18+20.
 *
 * Input
 * The input file contains many integer numbers. The last one is zero.
 *
 * Output
 * Print the output according to the example below.
 */

int main(){
	int num, i,sum=0;
	scanf("%d", &num);

	while(num!=0){
		sum=0;
		for(num,i=1;i<=5;num++){
			if(num%2==0){
				sum+=num;
				i++;
			}
		}
		printf("%d\n", sum);
		scanf("%d", &num);
	}
	return 0;
}
