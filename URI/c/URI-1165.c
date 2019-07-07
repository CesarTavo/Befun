#include <stdio.h>

/* A Prime Number is a number that is divisible only by 1 (one) and by itself. 
 * For example the number 7 is Prime, because it can be divided only by 1 and by 7.
 *
 * Input
 * The input contains several test cases. 
 * The first contains the number of test cases N (1 ≤ N ≤ 100). 
 * Each one of the following N lines contains an integer X (1 < X ≤ 107), 
 * that can be or not a prime number.
 *
 * Output
 * For each test case print the message 
 * “X eh primo” (X is prime) or “X nao eh primo” (X isn't prime) 
 * according with to above specification.
 */

int main(){
	int cases, num, i, j, aux;

	scanf("%d", &cases);
	for(i=1;i<=cases;i++){
		aux=0;
		scanf("%d", &num);
		for(j=2;j<num;j++){
			while(num%j==0){
				aux++;
				break;
			}
		}
			if(aux==0){
				printf("%d eh primo\n", num);
			}else
				printf("%d nao eh primo\n", num);
	}
	return 0;
}

