#include<stdio.h>

/*
Instructions: 
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/



    
 // Funtion to know if the num is a multiple or not using module
int multiple(int valor, int multiple1, int multiple2){
    int res1 = valor % multiple1;
    int res2 = valor % multiple2;
    if (res1 == 0 || res2 == 0){
        return valor;
    }
    return 0;
}

int main(){
// List with multiple values
int suma = 0;
int i = 0;

// ask below 1000
for(i=1; i<1000; i++){
    int m = multiple(i, 3, 5);
        suma += m;
	}

printf("Total: %d \n", suma);

return 0;
}
