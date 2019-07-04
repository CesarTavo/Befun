#include <stdio.h>

/* Write an program that reads two numbers X and Y (X < Y). 
 * After this, show a sequence of 1 to y, 
 * passing to the next line to each X numbers.
 *
 * Input
 * The input contains two integer numbers X (1 < X < 20) and Y (X < Y < 100000).
 *
 * Output
 * Each sequence must be printed in one line, 
 * with a blank space between each number, like the following example.
 */

int main(){
	int x,y, i,j, aux;
	aux=0;
	scanf("%d %d", &x, &y);
	
	if(x<y && 1<x && x<20 && y<100000){
		for(i=1,j=1;i<=y;i++,j++){
			if(j==x){
				printf("%d", i);
			}else 
				printf("%d ", i);
			if(j==x){
				j=0;
				printf("\n");
			}
		}
	}

	return 0;
}
