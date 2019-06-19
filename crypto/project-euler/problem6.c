/*
 * SUMA SUMA CUADRADA
 * La suma de los cuadrados de los primeros diez números naturales es,
 *
 * 1 2 + 2 2 + ... + 10 2 = 385
 * El cuadrado de la suma de los primeros diez números naturales es,
 *
 * (1 + 2 + ... + 10) 2 = 55 2 = 3025
 * Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es 3025 - 385 = 2640.
 *
 * Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
 */

#include <stdio.h>
#include <math.h>

int main(){
	int a=0,c=0;
	double b=0;
	for(int i=1;i<=100;i++){
		c = i*i;
		b += i;
		a += c;
	}
	b = pow(b,2);
	printf("%.lf\n", b-a);

}
