#include <stdio.h>

/* Write an algorithm to read an undeterminated number of data, 
 * each containing an individual's age. 
 * The final data, which will not enter in the calculations, 
 * contains the value of a negative age. 
 * Calculate and print the average age of this group of individuals.
 *
 * Input
 * The input contains an undetermined number of integers. 
 * The input will be stop when a negative value is read.
 *
 * Output
 * The output contains a value corresponding to the average age of individuals.
 *
 * The average should be printed with two digits after the decimal point.
 */

int main(){
	int num, count, sum=0;
	float average;
	count=0;
	scanf("%d", &num);
	while(num>0){
		sum+=num;
		count++;
		scanf("%d", &num);
	}

	average=sum/(count*1.0);
	printf("%.2f\n", average);

	return 0;
}
