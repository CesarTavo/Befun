#include <stdio.h>

/* Write an program to read two scores of a student. 
 * Calculate and print the semester average. 
 * The program must accept only valid scores (a score must fit in the range [0.10]). 
 * Each score must be validated separately.
 * 
 * The program must print a message "novo calculo (1-sim 2-nao)" 
 * that means "new calculate (1-yes 2-no)". 
 * After, the input will be (1 or 2). 
 * 1 means a new calculation, 2 means that the execution must be finished.
 * Input
 * 
 * The input file contains several positive or negative floating-point (double) values. 
 * After the input of 2 valid scores, 
 * an integer number X will be read. Your program must stop when X = 2.
 * Output
 * 
 * If an invalid score is read, 
 * must be printed the message "nota invalida". 
 * When two valid scores are read, 
 * the message "media = " must be printed folowed by the average between these 2 scores. 
 * The message "novo calculo (1-sim 2-nao)" must be printed after reading X. 
 * This message should be displayed again 
 * if the standard input number for X is less than 1 or greater than 2, as example below.
 * 
 * The output average must be printed with 2 digits after the decimal point.
 */

int main(){
	double num, media;
	int cont=0, opt=0;
	while(1){
		cont=0;
		media=0;
	while(1){
		if(cont==2){
			break;
		}
		scanf("%lf", &num);
		if(num>=0 && num<=10){
			cont++;
			media += num;
		}else
			printf("nota invalida\n");
	}
	media = media/2.00;
	printf("media = %.2lf\n", media);
	printf("novo calculo (1-sim 2-nao)\n");

	while(1){
		scanf("%d", &opt);
		if(opt!=1 && opt!=2){
			printf("novo calculo (1-sim 2-nao)\n");
		}else
			break;
	}
	if(opt==2)
		break;
	}
	return 0;
}
