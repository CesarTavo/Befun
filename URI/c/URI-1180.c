#include <stdio.h>

/* Write a program that reads a number N. 
 * This N is the size of a array X[N]. 
 * Next, read each of the numbers of X, 
 * find the smallest element of this array and its position within the array, 
 * printing this information.
 *
 * Input
 * The first line of input contains one integer N (1 < N <1000), 
 * indicating the number of elements 
 * that should be read to an array X[N] of integer numbers. 
 * The second row contains each of the N values, separated by a space.
 *
 * Output
 * The first line displays the message 
 * “Menor valor:” followed by a space and the lowest number read in the input. 
 * The second line displays the message 
 * “Posicao:” followed by a space and the array position in which the lowest number is, 
 * remembering that the array starts at the zero position.
 */

int main(){
	int x, i, menor, pos=0;
	scanf("%d", &x);

	int arr[x];
	for(i=0;i<x;i++){
		scanf("%d", &arr[i]);
	}
	menor=arr[0];

	for(i=0;i<x;i++){
		if(menor>=arr[i]){
			menor=arr[i];
			pos=i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
	return 0;
}
