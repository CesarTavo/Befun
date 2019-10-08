#include <stdio.h>

/* You have gotten two circular energy cables. The first one has radius R1 and
 * the second R2. You need to buy a circular conduit (see the image below) that
 * fits those two cables
 */

int main(){
	int cases, r1, r2, i;
	scanf("%d", &cases);
	for(i=1;i<=cases;i++){
		scanf("%d %d", &r1, &r2);
		printf("%d\n", r1+r2);
	}
	return 0;
}
