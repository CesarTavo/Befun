#include <stdio.h>
#include <string.h>

// BAZINGA!
// pedra, papel, tesoura, lagarto e Spock
// pedra > lagarto, pedra > tesoura
// papel > pedra, papel > Spock
// tesoura > lagarto, tesoura > papel
// lagarto > Spock, lagarto > papel
// Spock > tesoura, Spock > pedra

int main(){
	int n, i;
	char op1[8], op2[8];

	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%s %s", op1, op2);
		printf("Caso #%d: ", i);

		if(strcmp(op1, op2) == 0){
			printf("De novo!\n");
		}
		else if(strcmp(op1, "pedra") == 0 && (strcmp(op2, "lagarto") == 0 || strcmp(op2, "tesoura") == 0)){
			printf("Bazinga!\n");
		}
		else if(strcmp(op1, "papel") == 0 && (strcmp(op2, "pedra") == 0 || strcmp(op2, "Spock") == 0)){
			printf("Bazinga!\n");
		}
		else if(strcmp(op1, "tesoura") == 0 && (strcmp(op2, "lagarto") == 0 || strcmp(op2, "papel") == 0)){
			printf("Bazinga!\n");
		}
		else if(strcmp(op1, "lagarto") == 0 && (strcmp(op2, "Spock") == 0 || strcmp(op2, "papel") == 0)){
			printf("Bazinga!\n");
		}
		else if(strcmp(op1, "Spock") == 0 && (strcmp(op2, "tesoura") == 0 || strcmp(op2, "pedra") == 0)){
			printf("Bazinga!\n");
		}
		else{
			printf("Raj trapaceou!\n");
		}
	}
	return 0;
}
