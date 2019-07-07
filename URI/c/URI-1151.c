#include <stdio.h>

// Print the N fibonacci numbers

int main(){
	int num, i, x, y;

	scanf("%d", &num);
	if(0<num && num<46){
		for(i=0;i<num-1;i++){
			if(i==0){
				printf("0 ");
				x=1;
			}else if(i==1){
				printf("1 ");
				y=1;
			}else{
				x=x+y;
				y=x-y;
				printf("%d ", y);
			}
		}
		printf("%d\n", x);
	}
	return 0;
}
