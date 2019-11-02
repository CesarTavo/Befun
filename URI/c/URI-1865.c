#include <stdio.h>
#include <string.h>

int main(){
	char name[12];
	int n, i, c;

	scanf("%d", &c);
	for(i=1;i<=c;i++){
		scanf("%s %d", name, &n);

		if(strcmp(name, "Thor") == 0){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}

	return 0;
}
