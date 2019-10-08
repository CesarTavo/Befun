#include <stdio.h>

/* Santa Claus is playing with his elves to entertain them during the Christmas
 * Eve. The game consists of the elves writing numbers on pieces of paper and
 * place on the cap of Santa Claus. After all finished to put the numbers, Santa
 * draws a number and that number is how many "Ho" he should say.
 * Your job is to help Santa Claus by making a problem that shows all the "Ho"
 * that he should speak given the number drawn.
*/

int main(){
	int number, i;
	scanf("%d", &number);
	if(number > 0){
		for(i=1;i<number;i++){
			printf("Ho ");
		}
		printf("Ho!\n");
	}
	return 0;
}
