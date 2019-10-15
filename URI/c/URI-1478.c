#include <stdio.h>

int main(){
	int i, j, num, n, m, l;

	while(scanf("%d", &num) == 1 && num != 0){
		int matrix[num][num];
		
		// Down Diagonal
		for(n=1, m=num-1;n<=num;n++, m--){
			for(i=num-1,j=m;j>=0;i--, j--){
				matrix[i][j]=n;
			}
		}

		// Up Diagonal
		for(n=1, m=num, l=0;n<=num;n++, m--, l++){
			for(i=0,j=l;i<m;i++, j++){
				matrix[i][j]=n;
			}
		}

		//print matrix
		for(i=0;i<num;i++){
			for(j=0;j<num-1;j++){
				printf("%3d ", matrix[i][j]);
			}
			printf("%3d", matrix[i][num-1]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
