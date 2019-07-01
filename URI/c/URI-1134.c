#include <stdio.h>

/* A gas station wants to determine which of their products is 
 * the preference of their customers. 
 * Write a program to read the type of fuel supplied (coded as follows: 
 * 1. Alcohol 
 * 2. Gasoline 
 * 3. Diesel 
 * 4. End). 
 * If you enter an invalid code 
 * (outside the range of 1 to 4) 
 * a new code must be requested. 
 * The program will end when the inserted code is the number 4.
 *
 * Input
 * The input contains only integer and positive values.
 *
 * Output
 * It should be written the message: 
 * "MUITO OBRIGADO" and the amount of customers who fueled each fuel type, 
 * as an example.
 */

int main(){
	int d, a,g,e;
	a=0;
	g=0;
	e=0;

	scanf("%d", &d);
	while(1){
		if(d<1 || d>4){
			scanf("%d", &d);
		}
		switch(d){
			case 1:
				a++;
				scanf("%d", &d);
				break;
			case 2:
				g++;
				scanf("%d", &d);
				break;
			case 3:
				e++;
				scanf("%d", &d);
				break;
		}
		if(d==4)
			break;
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", a);
	printf("Gasolina: %d\n", g);
	printf("Diesel: %d\n", e);

	return 0;
}
