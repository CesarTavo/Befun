#include <stdio.h>

/* La empresa ABC decidió dar un aumento salarial a sus empleados, según la siguiente tabla:
* Salario		Porcentaje de Reajuste
* 0-400.00			15%
* 400.01-800.00			12%
* 800.01-1200.00		10%
* 1200.01-2000.00		7%
* Por encima de 2000.00		4%
*/

int main(){

	double SALARY;

	scanf("%lf", &SALARY);
		
	if(SALARY >= 0 && SALARY <= 400){
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n", SALARY = SALARY*1.15, SALARY*0.15);
	}else if(SALARY <= 800){
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n", SALARY = SALARY*1.12, SALARY*0.12);
	}else if(SALARY <= 1200){
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n", SALARY = SALARY*1.10, SALARY*0.10);
	}else if(SALARY <= 2000){
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n", SALARY = SALARY*1.07, SALARY*0.07);
	}else if(SALARY > 2000){
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n", SALARY = SALARY*1.04, SALARY*0.04);
	}
	return 0;
}
