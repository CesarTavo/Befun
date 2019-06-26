#include <stdio.h>

int main(){
	int unsigned long num1, num2, xor;

	while(scanf("%lu %lu", &num1, &num2)==2){
		xor = num1 ^ num2;
		printf("%lu\n", xor);
	}
	return 0;
}

