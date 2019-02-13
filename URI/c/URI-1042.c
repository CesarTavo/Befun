#include <stdio.h>

/* Lea tres números enteros y ordénelos en orden ascendente. 
 * Después, imprima estos valores en orden ascendente, una línea en blanco y 
 * luego los valores en la secuencia tal como fueron leídos.
 */

int main(){
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if(A > B && A > C){
		if(B > C){
		printf("%d\n%d\n%d\n", C, B, A);
		} else{
			printf("%d\n%d\n%d\n", B, C, A);
		}
	}
	if(B > A && B > C){
		if(A > C){
		printf("%d\n%d\n%d\n", C, A, B);
		} else{
		       	printf("%d\n%d\n%d\n", A, C, B);
		}
	}
	if(C > B && C > A){
		if(B > A){
		printf("%d\n%d\n%d\n", A, B, C);
		} else{
		       	printf("%d\n%d\n%d\n", B, A, C);
		}
	}
	printf("\n%d\n%d\n%d\n", A, B, C);
	return 0;
}
