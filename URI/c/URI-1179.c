#include <stdio.h>

/* In this problem you need to read 15 numbers and must put them into two different arrays: 
 * par if the number is even or impar if this number is odd. 
 * But  the size of each of the two arrrays is only 5 positions. 
 * So every time you fill one of two arrays, 
 * you must print the entire array to be able to use it again for the next numbers that are read. 
 * At the end, 
 * all remaining numbers of each one of these two arrays must be printed beggining with the odd array. 
 * Each array can be filled how many times are necessary.
 */

int main(){
	int i,j,number,par[5],impar[5], varpar=0, varimpar=0;
	
	for(i=1;i<=15;i++){
		scanf("%d", &number);
		if(number%2==0){
			par[varpar]=number;
			varpar++;
		}else{
			impar[varimpar]=number;
			varimpar++;
		}

		if(varpar==5){
			for(j=0;j<5;j++){
				printf("par[%d] = %d\n", j, par[j]);
			}
			varpar=0;
		}
		if(varimpar==5){
			for(j=0;j<5;j++){
				printf("impar[%d] = %d\n", j, impar[j]);
			}
			varimpar=0;
		}
	}
	if(varimpar<5){
		for(j=0;j<varimpar;j++){
			printf("impar[%d] = %d\n", j,impar[j]);
		}
	}
	if(varpar<5){
		for(j=0;j<varpar;j++){
			printf("par[%d] = %d\n", j,par[j]);
		}
	}

return 0;
}


