#include <stdio.h>

/* Write a program that reads two scores of a student. 
 * Calculate and print the average of these scores. 
 * Your program must accept just valid scores [0..10]. 
 * Each score must be validated separately.
 * 
 * Input
 * The input file contains many floating-point numbers,
 * positive or negative. 
 * The program execution will be finished after the input of two valid scores.
 * 
 * Output
 * 
 * When an invalid score is read, 
 * you should print the message "nota invalida".
 * After the input of two valid scores, the message "media = " 
 * must be printed followed by the average of the student. 
 * The average must be printed with 2 numbers after the decimal point.
 */

int main(){
	double num, cont, media;
	while(1){
		if(cont==2){
			break;
		}
		scanf("%lf", &num);
		if(num>=0 && num<=10){
		       cont++;
		       media+=num;
		}else{
			printf("nota invalida\n");			
		}
	}
	media = media/2.00;
	printf("media = %.2lf\n", media);
	return 0;
}

