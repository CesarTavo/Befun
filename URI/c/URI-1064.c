
#include <stdio.h>

/* Read 6 values that can be floating point numbers. 
 * After, print how many of them were positive. 
 * In the next line, print the average of all positive values typed, 
 * with one digit after the decimal point.
 *
 * Input
 * The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.
 *
 * Output
 * The first output value is the amount of positive numbers. The next line should show the average of the positive values ​typed. 
 */

int main(){
	float numeros[5];
	float suma;
	int i, average;

	for(i=0; i<6; i++){
		scanf("%f", &numeros[i]);
	}

	for(i=0; i<6; i++){
		if(numeros[i]>=0){
			suma += numeros[i];
			average ++;
		}
	}

	printf("%d valores positivos\n", average);
	printf("%.1f\n", suma/average);
	return 0;
}
