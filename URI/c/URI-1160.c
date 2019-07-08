#include <stdio.h>

int main(){
	int pa, pb, i, cases, years;
	float ga, gb;

	scanf("%d", &cases);
	for(i=1;i<=cases;i++){
		years=0;
		scanf("%d %d %f %f", &pa, &pb, &ga, &gb);
		ga=ga/100;
		gb=gb/100;

		for(pa;pa<=pb;years++){
			pa+=pa*ga;
			pb+=pb*gb;
			if(years>100)
				break;
		}
		if(years<=100)
			printf("%d anos.\n", years);
		else
			printf("Mais de 1 seculo.\n");
	}
	return 0;
}
