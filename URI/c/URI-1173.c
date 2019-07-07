#include <stdio.h>

/* Read a number and make a program which 
 * puts this number in the first position of an array N[10]. 
 * In each subsequent position, 
 * put the double of the previous position. 
 * For example, if the input number is 1, 
 * the array numbers must be 1,2,4,8, and so on.
 *
 * Input
 * The input contains an integer number V (V < 50).
 *
 * Output
 * Print the stored number of each array position, 
 * in the form "N[i] = X", 
 * where i is the position of the array and x is the stored number at the position i. 
 * The first number for X is V.
 */

int main(){
	int arr[10], i, num;

	scanf("%d", &num);
	for(i=0;i<=9;i++){
		arr[i]=num;
		printf("N[%d] = %d\n", i,num);
		num*=2;
	}

	return 0;
}
