#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, del, bas1, bas2;

    scanf("%lf %lf %lf", &a, &b, &c);
    
    del = (b * b)-(4*a*c);

    bas1 = ((-b) + sqrt(del)) / (2*a);
    bas2 = ((-b) - sqrt(del)) / (2*a);


    if (!(isnan(bas1) || isinf(bas1) || isnan(bas2) || isinf(bas2))){

        printf("R1 = %.5lf\n", bas1);
        printf("R2 = %.5lf\n", bas2);
        
    }
    else{
        printf("Impossivel calcular\n");
    }
    
    
    return 0;
}
