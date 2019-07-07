#include <stdio.h>

/* Read an array X[10]. 
 * After, replace every null or negative number of X by 1. 
 * Print all numbers stored in the array X.
 *
 * Input
 * The input contains 10 integer numbers. 
 * These numbers can be positive or negative.
 *
 * Output
 * For each position of the array, print "X [i] = x", 
 * where i is the position of the array and x is the number stored in that position.
 */

int main(){
	int arr[10], i;

	for(i=0;i<10;i++){
		scanf("%d", &arr[i]);
		if(arr[i]<=0){
			arr[i]=1;
		}
	}

	for(i=0;i<10;i++){
		printf("X[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
