#include <stdio.h>

/* Your program must read an integer X indefinited times 
 * (the program must stop when X is equal to zero). 
 * For each X print the sequence from 1 to X, 
 * with one space between each one of these numbers.
 *
 * PS: Be carefull. 
 * Don't leave any space after the last number of each line, 
 * otherwise you'll get Presentation Error.
 *
 * Input
 * The input file contains many integer numbers. The last one is zero.
 *
 * Output
 * For each number N of the input file, 
 * one output line must be printed, 
 * from 1 to N like the following example. 
 * Be careful with blank spaces after the last line number.
 */

int main(){
	int num, i;

	while(1){
		scanf("%d", &num);
		if(num <= 0){
			break;
		}

		for(i=1;i<=num;i++){
			if(i==num){
				printf("%d", i);
			}else
				printf("%d ", i);
			if(i==num){
				printf("\n");
			}
		}
	}
	return 0;
}
