#include <stdio.h>

/* URI-1541
 */

double sqrt(double arg){
	int i=1;
	for(i; i*i<=arg; i++){
	}
	return i;
}

int main(){
	int A,B,C, i;
	double area;
	scanf("%d", &A);
	while(A != 0){
		scanf("%d %d", &B, &C);
		area = A*B*100.0/C;
		printf("%.lf\n", sqrt(area)-1);
		scanf("%d", &A);
	}
	return 0;
}

