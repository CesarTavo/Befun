#include <stdio.h>

/* Leer cuatro números (N1, N2, N3, N4), con 1 dígito después del punto decimal,
 * correspondiente a 4 resultados obtenidos por un estudiante. Calcular el promedio con pesos 2, 3, 4 * e 1 respectivamente, para estos 4 resultados e imprimir el mensaje "Media: " (Promedio), segudio p
 * or el cálculo obtenido. Si el promedio es de 7.0 o más, 
 * imprimir el mensaje "Aluno aprovado." (Estudiante Aprobado). Si el promedio es menor que 5.0, 
 * imprimir el mensaje: "Aluno reprovado." (Estudiante Reprobado). 
 * Si el promedio es entre 5.0 and 6.9, incluyendo este, el programa deberá imprimir el mensaje 
 * "Aluno em exame." (Estudiante en examén).
 * En caso de examen, lea una puntuación más. 
 * Imprimir el mensaje "Nota do exame: " (Nota de examen) seguido por la puntuación mostrada.
 * Vuelva a calcular el promedio 
 * (suma la puntuación del examen con el promedio calculado anteriormente y divida por 2) 
 * e imprima el siguiente mensaje “Aluno aprovado.”
 *  (Estudiante Aprobado) en caso de que el promedio sea 5.0 o más o "Aluno reprovado." 
 *  (Estudiante Reprobado) en caso de que el promedio sea 4.9 o menor. 
 *  Para estos 2 casos (Aprobado o reprobado después del examen) imprimir el mensaje 
 *  "Media final: " (Promedio Final) Seguido por el promedio final 
 *  para este estudiante en la última línea.
*/

int main(){
	double A, B, C, D, MEDIA, EXTRA;

	scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

	MEDIA = ((A*2)+(B*3)+(C*4)+(D*1))/10;

	printf("Media: %.1lf\n", MEDIA);
	if(MEDIA >= 7){
		printf("Aluno aprovado.\n");
	}else if(MEDIA < 5.0){
		printf("Aluno reprovado.\n");
	}else if(MEDIA >= 5.0 && MEDIA < 7.0){
		printf("Aluno em exame.\n");
		scanf("%lf", &EXTRA);
		printf("Nota do exame: %.1lf\n", EXTRA);
		MEDIA = (MEDIA+EXTRA)/2;
		if(MEDIA >= 5){
			printf("Aluno aprovado.\n");
		}else if(MEDIA < 5){
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n", MEDIA);
	}
	return 0;
}
