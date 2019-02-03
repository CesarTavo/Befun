#include <stdio.h>
#define PI 3.14159

// Calcula el area de un circula con su radio

int main(){
	double A, radio;

	scanf("%lf", &radio);
	
	printf("A=%.4f\n", PI*(radio*radio));

	return 0;
}

