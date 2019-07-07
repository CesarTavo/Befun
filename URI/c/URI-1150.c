#include <stdio.h>

int main(){
	int x,y,i,aux=1;
	scanf("%d %d", &x, &y);
	while(y<=x){
		scanf("%d", &y);
	}
	
	for(i=x;x<y;i++){
		x+=i;
		aux++;
	}
	
	printf("%d\n", aux);
	return 0;
}
