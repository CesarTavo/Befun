#include <stdio.h>

/* Two friends ask the attendant a snack bar propose a challenge , so that
 * whoever hit him more , would not pay the bill. Then the following is proposed
 * : Given the following sum below report the result , with the same number of
 * terms : S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ... Write a program that , given a
 * number of terms, report the result of the sum above.
 */

int main(){
	int c, num, i;
	scanf("%d", &c);
	for(i=1;i<=c;i++){
		scanf("%d", &num);
		if(num%2==0)
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
}
