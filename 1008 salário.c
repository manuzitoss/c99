#include <stdio.h>

int main() {

   float num, hor, sal, cal;

   scanf("%f %f %f", &num, &hor, &sal);

   cal = (hor * sal);

   printf("NUMBER = %.0f\n", num);
   printf("SALARY = U$ %.2f\n", cal);
      
    return 0;
}
