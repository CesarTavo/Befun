#include <stdio.h>

/* The slugs racing is a sport that has grown in recent years, causing several
 * people dedicate their lives trying to capture fast slugs, and trains them to
 * make millions in races around the world. But the task of capturing fast slugs
 * is not an easy task, since almost all the slugs are very slow. 
 * Each slug is classified at a level depending on their speed: 
 * Level 1: If speed is less than 10 cm/h.  
 * Level 2: If speed is greater than or equal to 10 cm/h and lower than 20 cm/h.  
 * Level 3: If speed is greater than or equal to 20 cm/h.
 * Your task is to identify which level of speed faster slug of a group of
 * slugs.
*/

int maxinarray(int arr[], int size){
	int i, max;
	max = arr[0];
	for(i=1;i<size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int cases, i, number, max;
	while(scanf("%d", &cases) != EOF){
		int arr[cases];
		for(i=0; i<cases; i++){
			scanf("%d", &arr[i]);
		}
		max = maxinarray(arr, cases);
		
		if(max<10)
			printf("1\n");
		else if(max >= 10 && max < 20)
			printf("2\n");
		else 
			printf("3\n");
	}

	return 0;
}
