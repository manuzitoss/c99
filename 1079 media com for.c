#include <stdio.h>

int main() {
  
int i, x;
double num1, num2, num3, cal;
  scanf("%d", &x);
  for (i=0;i<x;i++){ 
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    cal = (num1*2 + num2*3 + num3*5)/10;
    printf("%.1lf\n", cal);
  }

  

    return 0;
}
