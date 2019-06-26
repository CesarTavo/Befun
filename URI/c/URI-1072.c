#include <stdio.h>

/*Leer un entero N. 
 * Este N será el número de números enteros X que serán leídos.
 *
 * Mostrar cuantos de estos números X están dentro del intervalo [10,20] 
 * y cuantos están fuera de este intervalo.
 */

int main(){
	int n, in=0, out=0, cont, i;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&cont);
		if(cont>=10 && cont<= 20){
			in ++;
		}
		else{
			out ++;
		}
	}
	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;
}
