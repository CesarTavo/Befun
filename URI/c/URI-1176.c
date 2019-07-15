#include <stdio.h>

// Print the number's fibonacci

int main(){
	long long int num, x, y;
	int i, j, cases;

	scanf("%d", &cases);
	for(i=1;i<=cases;i++){
		x=0;
		y=1;
		scanf("%lld", &num);
		for(j=0;j<num;j++){
			x=x+y;
			y=x-y;
			}
		printf("Fib(%lld) = %lld\n", num, x);
	}
	return 0;
}
