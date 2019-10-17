#include <stdio.h>

// Function to make n power
int power(int a, int b){
	if(b==0){
		return 1;
	}
	else{
		return (a*power(a, b-1));
	}
}

// Function to divide the last digit to know how many spaces
int spaces(int x){
	int b=0;
	while(x){
		x/=10;
		b++;
	}
	return b;
}

int main(){
	int i, j, num, n, m, s, p; 

	while(scanf("%d", &num) == 1 && num != 0){
		int matrix[num][num];
		
		// First line
		// 1 2 4 8 16 ...
		// so the next line is the pow of the last
		for(i=0, n=2;i<num;i++){
			for(j=0, m=i;j<num;j++, m++){
				matrix[i][j]=power(n,m);
			}
		}

		s = matrix[num-1][num-1];
		p = spaces(s);

		//print matrix
		for(i=0;i<num;i++){
			for(j=0;j<num-1;j++){
				// text right aligned by variable p
				printf("%*d ", p, matrix[i][j]);
			}
			printf("%*d", p, matrix[i][num-1]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
