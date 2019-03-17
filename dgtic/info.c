#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main () {
   int num = 0;
   char gen_version[60];
   char gen_information[50];
   char string[50];
   const char version10[2] = "0";
   const char version81[3] = "8";
   const char version7[1] = "7";
   const char versionXP[2] = "XP";
   char s;
 
   printf("********************\n");
   printf("El siguiente programa creara un archivo llamado *file.txt*,\n");
   printf("donde vendra su informacion actual del sistema operativo.\n");
   printf("Luego creara un archivo llamado *reporte.txt*,\n donde vendra toda su informacion actual del hardware\n");
   printf("********************\n");

   strcpy(gen_version, "systeminfo | find \"Microsoft Windows\" > version.txt" );
   system(gen_version);

   FILE *in_file = fopen("version.txt", "r");

while ( fscanf(in_file,"%s", string) == 1)
                {
                        if((strstr(string, version10) != 0) || (strstr(string, version81) != 0) || (strstr(string, version7) != 0)) {//if match found
				strcpy(gen_information, "msinfo32.exe /report reporte.txt");
				system(gen_information);
				num++;
                        } else if((strstr(string, versionXP) != 0)){
				//if match found
				strcpy(gen_information, "winmsd /report reporte.txt");
				system(gen_information);
				num++;
			}
                }
                printf("Revise el archivo reporte.txt para ver detalles");
		num = 0;          
                fclose(in_file);


//   if(strstr(version_general, version10) != NULL){
//		printf("La version de su sistema es: Microsoft Windows %s", version10);
//		return(0);
//	}
   
// commands 
// winmsd report path
// msinfo32.exe report info.txt

	printf("\n\tEl programa se cerrara en 3 segundos\n");
	sleep(3);
} 