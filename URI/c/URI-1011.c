#include<stdio.h>
#define PI 3.14159
double volesf(int r){
	double vol=0.0;
	
	vol = ((4.0/3.0)*PI*r*r*r);
	return vol;	
}

int main(){

double radio, vol;
scanf("%lf",&radio);
vol = volesf(radio);
printf("VOLUME = %.3lf \n", vol);

return 0;
}

