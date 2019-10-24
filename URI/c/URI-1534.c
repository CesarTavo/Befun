#include <stdio.h>

/*The input contains many test cases and ends with EOF. Each test case consist 
 * in a integer number N (3 ≤ N < 70), that indicates the size 
 * (lines and columns) of a bidimentional array that must be printed.
 *
 * Example:
 * 4
 *
 * 1332
 * 3123
 * 3213
 * 2331
 */

int main(){
	int num;
	while(scanf("%d", &num)!=EOF){
		int i, j, arr[num][num];
		for(i=0;i<num;i++){
			for(j=0;j<num;j++){
				arr[i][j]=3;
			}
		}

		for(i=0;i<num;i++){
			arr[i][i]=1;
		}

		for(i=0,j=num-1;i<num;i++,j--){
			arr[i][j]=2;
		}

		for(i=0;i<num;i++){
			for(j=0;j<num;j++){
				printf("%d", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

