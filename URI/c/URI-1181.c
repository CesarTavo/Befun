#include <stdio.h>

int main(){
  double arr[12][12];
  int i, j, line;
  float sum=0, av=0;
  char c;

  scanf("%d", &line);

  scanf(" %c", &c);
  
  for(i=0;i<12;i++){
    for(j=0;j<12;j++){
      scanf("%lf", &arr[i][j]);
      if(i==line){
	sum+=arr[i][j];
      }
    }
  }

  if(c=='S')
    printf("%.1lf\n", sum);
  else if(c=='M')
    printf("%.1lf\n", sum/12);
  
  return 0;
}
