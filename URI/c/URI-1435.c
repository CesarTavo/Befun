#include <stdio.h>

int main(){
	int num, n, i,j, m, l;
	while(scanf("%d", &num) == 1 && num != 0){
		int matrix[num][num];
		int r = num;
		int s = (num/2)+1;
		
		for(n=1, i=0, j=0, r; n<=s; n++, i++, j++, r--){
			for(m=i;m<r;m++){
				for(l=j;l<r;l++){
					matrix[m][l]=n;
				}
			}
		}
		//print matrix
		
		for(i=0;i<num;i++){
			for(j=0;j<(num-1);j++){
				printf("%3d ", matrix[i][j]);
			}
			printf("%3d", matrix[i][num-1]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
