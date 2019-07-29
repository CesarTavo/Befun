#include <stdio.h>

/* Read an uppercase character that indicates an operation that 
/ will be performed in an array M[12][12]. 
/ Then, calculate and print the sum or average 
/ considering only that numbers 
/ that are below of the triangle 
*/

int main(){
  double arr[12][12], sum=0, av=0;
  int i, j, a, b;
  char c;

  scanf(" %c", &c);

  for(i=0;i<12;i++){
    for(j=0;j<12;j++){
      scanf("%lf", &arr[i][j]);
    }
  }

  for(i=11,a=11,b=1;i>0;i--,a--,b++){
    for(j=b;j<a;j++){
      sum += arr[i][j];
      av++;
      //printf("%.1lf ", arr[i][j]);
    }
    //printf("\n");
  }

  if(c=='S')
    printf("%.1lf\n", sum);
  else if(c=='M')
    printf("%.1lf\n", sum/av);
  
  return 0;
}
