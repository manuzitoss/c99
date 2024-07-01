#include <stdio.h>

int main() {

   double salf, ven, cal;

   char nom[10];

   scanf("%s", nom);
   scanf("%lf %lf", &salf, &ven);
   
   
    cal = (((ven * 15)/ 100)+ salf);
   
   printf("TOTAL = R$ %.2lf\n", cal);
   
    return 0;
}
