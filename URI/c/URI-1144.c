#include <stdio.h>

int main(){
	int num, i;
	i=1;

	scanf("%d", &num);

	for(i;i<=num;i++){
		printf("%d %d %d\n", i, i*i, i*i*i);
		printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
	}
	return 0;
}
