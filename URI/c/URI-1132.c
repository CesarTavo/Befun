#include <stdio.h>

/*Write a program that reads two integer numbers X and Y and 
 * calculate the sum of all number not divisible by 13 between them, 
 * including both.
 *
 * Input
 * The input file contains 2 integer numbers X and Y without any order.
 *
 * Output
 * Print the sum of all numbers between X and Y not divisible by 13, including them if it is the case.
 */

int main(){
	int x,y, sum;
	sum = 0;

	scanf("%d %d", &x, &y);
	if(x<y){
		for(x; x<=y; x++){
			if((x%13)==0){
				 sum +=0;
			}else
				sum+=x;
		}
	}else if(y<x){
		for(y; y<=x; y++){
			if((y%13)==0){
				 sum +=0;
			}else
				sum+=y;
		}
	}

	printf("%d\n", sum);
	return 0;
}
