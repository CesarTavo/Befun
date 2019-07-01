#include <stdio.h>

int main(){
	int inter, gremio, empates, plays, d, int_vic, grem_vic;
	empates = 0;
	plays = 0;
	int_vic = 0;
	grem_vic = 0;

	scanf("%d %d", &inter, &gremio);
	plays++;
	if(inter==gremio){
		empates++;
	}else if(inter>gremio){
		int_vic++;
	}else
		grem_vic++;

	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &d);

	while(1){
		if(d<1 || d>2){
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &d);
		}else if(d==1){
			scanf("%d %d", &inter, &gremio);
			plays++;
			d = 0;
			if(inter==gremio){
				empates++;
			}else if(inter>gremio){
				int_vic++;
			}else
				grem_vic++;
		}

		if(d==2)
			break;
	}

	printf("%d grenais\n", plays);
	printf("Inter:%d\n", int_vic);
	printf("Gremio:%d\n", grem_vic);
	printf("Empates:%d\n", empates);
	if(int_vic>grem_vic){
		printf("Inter venceu mais\n");
	}else if(grem_vic>int_vic){
		printf("Gremio venceu mais\n");
	}else
		printf("Não houve vencedor\n");

	return 0;
}

