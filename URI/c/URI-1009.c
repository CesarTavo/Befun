#include<stdio.h>
int main()
{
char name;
double salary, value, TOTAL;
scanf("%s %lf %lf", &name, &salary, &value);

TOTAL = salary+value*.15;
printf("TOTAL = R$ %.2lf\n", TOTAL);
return 0;
}
