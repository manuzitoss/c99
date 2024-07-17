#include <stdio.h>

int main(){

  float sal, cal, nvsal;
  scanf("%f", &sal);
  if (sal>0 && sal<=400){
      cal = sal*15/100;
      printf("Novo salario: %.2f\n", cal + sal);
      printf("Reajuste ganho: %.2f\n", cal);
      printf("Em percentual: 15 %\n");
  }else if (sal>400.01 && sal<=800){
      cal = sal*12/100;
      printf("Novo salario: %.2f\n", cal + sal);
      printf("Reajuste ganho: %.2f\n", cal);
      printf("Em percentual: 12 %\n");
  }else if(sal>800.01 && sal<=1200){
    cal = sal*10/100;
    printf("Novo salario: %.2f\n", cal + sal);
    printf("Reajuste ganho: %.2f\n", cal);
    printf("Em percentual: 10 %\n");
  }else if(sal>1200.01 && sal<=2000){
      cal = sal*7/100;
      printf("Novo salario: %.2f\n", cal + sal);
      printf("Reajuste ganho: %.2f\n", cal);
      printf("Em percentual: 7 %\n");
  }else if (sal>2000){
      cal = sal*4/100;
      printf("Novo salario: %.2f\n", cal + sal);
      printf("Reajuste ganho: %.2f\n", cal);
      printf("Em percentual: 4 %\n");
  }
  return 0;
}
