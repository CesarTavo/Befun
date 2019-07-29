#include <stdio.h>

/* Read an uppercase character that indicates an operation that 
/ will be performed in an array M[12][12]. 
/ Then, calculate and print the sum or average 
/ considering only that numbers 
/ that are below of the Secundary diagonal of the array
*/

int main(){
  double arr[12][12];
  int i, j, a;
  float sum=0, av=0;
  char c;

  scanf(" %c", &c);

  for(i=0;i<12;i++){
    for(j=0;j<12;j++){
      scanf("%lf", &arr[i][j]);
    }
  }

  for(i=0,a=12;i<12;i++,a--){
    for(j=a;j<12;j++){
      sum += arr[i][j];
      av++;
    }
  }

  if(c=='S')
    printf("%.1lf\n", sum);
  else if(c=='M')
    printf("%.1lf\n", sum/av);
  
  return 0;
}
