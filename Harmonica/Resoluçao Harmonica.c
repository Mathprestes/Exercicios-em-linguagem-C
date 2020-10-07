#include <stdio.h>

int main() {
  
  float Hn;     
  int n, k;
  
    scanf("%d", &n);
  
    Hn = 0;

    for (k = 1; k <= n; k++)
       Hn += (float)1/k;
  
    printf("%.8f",Hn);
  
  return 0;
}
