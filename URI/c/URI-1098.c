#include <stdio.h>

/* Realizar un programa que visualice una secuencia 
 * igual a la del siguiente ejemplo.
 * I=0 J=1
 * I=0 J=2
 * I=0 J=3
 * I=0.2 J=1.2
 * I=0.2 J=2.2
 * I=0.2 J=3.2
 * .....
 * I=2 J=?
 * I=2 J=?
 * I=2 J=?
 */

int main(){
	double i,j, a,b;
	int n;
	for(i=0;i<=1.9; i=i+.2){
		for(j=1.0;j<=3.0;j++){
			a=i+j;
			if(i==0.0 || i==1.0 ){
				printf("I=%.0lf J=%.0lf", i,a);
			}else if(a == 3.0 || a == 4.0 || a == 5.0){
				printf("I=%.0lf J=%.0lf", i,a);
			}else{
				printf("I=%.1lf J=%.1lf", i,a);
			}
			printf("\n");
		}
	}
	for(n=3;n<=5;n++){
		printf("I=2 J=%d\n", n);
	}
	return 0;
}
