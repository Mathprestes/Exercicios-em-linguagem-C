#include <stdio.h>
#define TAM 100
    
    double p(double x, int n, double a[]) {
        
		int i;
        double pParcial = 0.0, termoX = 1.0;    
        
		for (i = 0; i <= n; i = i + 1) {                                       
            pParcial = pParcial + a[i] * termoX;
            termoX = termoX * x;                
        }                                       
       
	   return pParcial;
    }

    int main(void) {
       
	    int i, n;
        double coef[TAM], x;

        scanf("%d %lf", &n, &x);
        
		if (n < TAM) {

            for (i = n; i >= 0; i = i - 1) scanf("%lf", &coef[i]);
                printf("%.2lf\n", p(x, n, coef));
            }

        return 0;
    }
