#include <stdio.h>
char *binbin(int n);

int main(){
	int num1, num2, xor;

	printf("Give me the numbers!: \n");
	scanf("%d %d", &num1, &num2);
	printf("%s %3d\n", binbin(num1), num1);
	printf("%s %3d\n", binbin(num2), num2);

	xor = num1 ^ num2;
	printf("--------------------------------\n");
	printf("%s %3d\n", binbin(xor), xor);
	
}

char *binbin(int n){
	static char bin[33];
	int x;
	for(x=0;x<32;x++){
		//bin [x] = n & 0x80? '1': '0';
		bin[x] = n;
	       	if(n & 0x80000000){
		       	bin[x] = '1';
		}else{
			bin[x] = '0';
		}
		n <<= 1;
		//printf("%s", bin);
	}
	bin[x] = ' ';
	return(bin);
}
