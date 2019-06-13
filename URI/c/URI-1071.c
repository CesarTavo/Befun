#include <stdio.h>

/*
 * Read two integer values X and Y. 
 * Print the sum of all odd values between them.
 *
 * Input
 * The input file contain two integer values.
 *
 * Output
 * The program must print an integer number. 
 * This number is the sum off all odd values between 
 * both input values that must fit in an integer number.
 */

int main(){
	int a = 0, b = 0, i = 0, sum=0;

	scanf("%d%d", &a, &b);
	if(a < b){
		if(a % 2 == 0){
			for(i=a+1; i<b; i+=2){
				sum += i;
			}
			printf("%d\n", sum);
		}
		else{
			for(i=a+2; i< b; i+=2){
				sum += i;
			}
			printf("%d\n", sum);
		}

	}
	else if(a > b){
		if(b % 2 == 0){
			for(i=b+1; i<a; i+=2){
				sum += i;
			}
			printf("%d\n", sum);
		}
		else{
			for(i=b+2; i<a; i+=2){
				sum += i;
			}
			printf("%d\n", sum);
		}

	}
	else{
		printf("0\n");
	}

	return 0;
}


