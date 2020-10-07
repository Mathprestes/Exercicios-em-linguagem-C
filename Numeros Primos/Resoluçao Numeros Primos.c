#include <stdio.h>

int main() {
  
  int i, x; 
  int div=0;

  scanf("%d", &x);

  if (x < 10000000) {
  
    for (i=1; i<=x; i++) {
        
		if (x%i == 0) { 
            div++;
        }
    }
    
    if (div == 2)
        printf("PRIMO");
    else
        printf("!PRIMO");

}
  
  return 0;

}
