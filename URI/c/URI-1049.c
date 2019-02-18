#include <stdio.h>
#include <string.h>

/* En este problema, su trabajo es leer tres palabras en portugués. 
 * Estas palabras definen un animal de acuerdo con la siguiente tabla, 
 * de izquierda a derecha. 
 * Después, imprima el animal elegido definido por estas tres palabras.
 * https://www.urionlinejudge.com.br/judge/es/problems/view/1049
*/

int main(){

	char str1[22], str2[22], str3[22],
		str11[] = "vertebrado",
		str12[] = "invertebrado",
		str21[] = "ave",
		str22[] = "mamifero",
		str23[] = "inseto",
		str24[] = "anelideo",
		str31[] = "carnivoro",
		str32[] = "onivoro",
		str33[] = "onivoro",
		str34[] = "herviboro",
		str35[] = "hematofago",
		str36[] = "herviboro",
		str37[] = "hematofago",
		str38[] = "onivoro";

	scanf("%s", &str1);
	scanf("%s", &str2);
	scanf("%s", &str3);

	if(strcmp(str1, str11) == 0){
		if(strcmp(str2, str21) == 0){
			if(strcmp(str3, str31) == 0){
				printf("aguia\n");
				return 0;	
			} 
			printf("pomba\n");
			return 0;			
	} else if(strcmp(str2, str22) == 0){
		if(strcmp(str3, str33) == 0){
			printf("homem\n");
			return 0;
		} printf("vaca\n");
		return 0;
	}
	} else if(strcmp(str1, str12) == 0){
		if(strcmp(str2, str23) == 0){
			if(strcmp(str3, str35) == 0){
				printf("pulga\n");
				return 0;
			} 
			printf("lagarta\n");
			return 0;
		}else if(strcmp(str2, str24) == 0){
			if(strcmp(str3, str37) == 0){
				printf("sanguessuga\n");
				return 0;
			}
			printf("minhoca\n");
			return 0;
		}
		return 0;
	}
	return 0;
}


