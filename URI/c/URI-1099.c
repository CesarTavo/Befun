#include <stdio.h>

/* Leer un número entero N el cual es la cantidad de casos de prueba. 
 * Cada caso de prueba es una línea que contiene 2 números enteros X e Y. 
 * Imprimir la suma de todos los valores impares entre ellos, 
 * sin incluir a X e Y.
 *
 * Entrada
 * La primera línea de entrada es un número entero N 
 * el cual es la cantidad de casos que siguen. 
 * Cada caso de prueba es una línea que contiene dos números enteros X e Y.
 *
 * Salida
 * Imprimir la suma de todos los valores impares entre X e Y.
 */

int main(){
	int i, cases, sum, num1, num2;
	sum = 0;
	scanf("%d", &cases);
	for(i=0;i<cases;i++){
		scanf("%d %d", &num1, &num2);
		if(num2>num1){
			if(num1%2==0){
				num1=num1+1;
				for(num1;num1<num2;num1=num1+2){
					sum += num1;
				}
				printf("%d\n", sum);
			}else{
				num1=num1+2;
				for(num1;num1<num2;num1=num1+2){
					sum += num1;
				}
				printf("%d\n", sum);
			}
		}else{
			if(num2%2==0){
				num2=num2+1;
				for(num2;num2<num1;num2=num2+2){
					sum += num2;
				}
				printf("%d\n", sum);
			}else{
				num2=num2+2;
				for(num2;num2<num1;num2=num2+2){
					sum += num2;
				}
				printf("%d\n", sum);
			}
		}
		sum=0;
	}
	return 0;
}
