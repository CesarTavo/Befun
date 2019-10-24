#include <stdio.h>

/* Your work in this program is to read an integer number that is the size of a
 * square matrix (width and height) to be filled as follows: the outer part is
 * filled with 0 in the inner part is filled with 1, the main diagonal is filled
 * with 2, the secondary diagonal is filled with 3 and the central element is 4,
 * as the examples below.
 * Obs: square with '1' always starts at position size / 3, considering width
 * and height and both begin in 0 (zero).
 */

int main(){
	int n, i, j, s;
	while(scanf("%d", &n)!= EOF){

		if(n>=5 && n <= 101 && n%2==1){
			int matriz[n][n];
		//Fill With 0's
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					matriz[i][j]=0;
				}
			}
		//Diagonal 2's
			for(i=0,j=0;i<n;i++,j++){
				matriz[i][j]=2;
			}
		//Diagonal 3's
			for(i=0,j=(n-1);i<n;i++,j--){
				matriz[i][j]=3;
			}

		//Square 1's
			for(i=(n/3);i<(n-(n/3));i++){
				for(j=(n/3);j<(n-(n/3));j++){
					matriz[i][j]=1;
				}
			}

		//Center 4
			matriz[(n/2)][(n/2)]=4;
			
		//print matriz
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		}
	}

	return 0;
}

