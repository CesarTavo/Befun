#include<stdio.h>

int posmin(int arr[], int size){
	int i, min, j;
	min = arr[0];
	j = 1;
	for(i=1;i<size;i++){
		if(arr[i] < min){
			min = arr[i];
			j = i+1;
		}
	}
	return j;
}

int main(){
	int c, n, i, j, min;

	scanf("%d", &c);
	int arr[c];
	for(i=0;i<c;i++){
		scanf("%d",&arr[i]);
	}

	min = posmin(arr, c);
	printf("%d", min);

	return 0;
}
