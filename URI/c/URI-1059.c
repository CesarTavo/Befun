#include <stdio.h>

// Escriba un programa que imprima todos los números pares entre 1 y 100, incluir los extremos si corresponde.

int main(){
	int i;
	for(i = 2; i <= 100; i = i+2){
		printf("%d\n", i);
	}
}
