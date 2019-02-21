#include <stdio.h>

/* Escriba un programa que lea 6 números. Estos números sólo serán positivos o negativosi
 *  (ignorar valores nulos). Imprima la cantidad total de números positivos.
 */

int main(){
	double NUM;
	int AUX, i;

	AUX = 0;

	for(i = 1; i <= 6; i++){
		scanf("%lf", &NUM);
		if(NUM >= 0){
			AUX++;
		}
	}	
	printf("%d valores positivos\n", AUX);
	return 0;
}
