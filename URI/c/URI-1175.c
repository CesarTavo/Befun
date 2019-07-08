#include <stdio.h>

/* Write a program that reads an array N [20]. 
 * After, change the first element by the last, 
 * the second element by the last but one, etc.., 
 * Up to change the 10th to the 11th. print the modified array.
 *
 * Input
 * The input contains 20 integer numbers, positive or negative.
 *
 * Output
 * For each position of the array N print "N[i] = Y", 
 * where i is the array position and Y is the number stored in that position.
 */

int main(){
	int N[20], i;

	for(i=19;i>=0;i--){
		scanf("%d", &N[i]);
	}
	for(i=0;i<=19;i++){
		printf("N[%d] = %d\n", i, N[i]);
	}
	return 0;
}
