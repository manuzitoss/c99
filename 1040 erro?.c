#include <stdio.h>
#include <string.h>

int main() {

  float n1, n2, n3, n4, cal, ex, cal2;

  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  cal = (n1 * 2.0 + n2 * 3.0 + n3 * 4.0 + n4 * 1.0) / 10.0;

  printf("Media: %.1f\n", cal);

  if (cal >= 7.0){
    printf("Aluno aprovado.\n");    
    return 0;
  }
  
  else if (cal < 5.0){
    printf("Aluno reprovado.\n");
    return 0;
  }
   
  else if (cal >= 5.0 && cal < 6.9)
    printf("Aluno em exame.\n");
    scanf("%f", &ex);
    printf("Nota do exame: %.1f\n", ex);
    cal2 = (ex + cal)/2;
  
      if (ex >= 5)
        printf("Aluno aprovado.\n");
      else
        printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n", cal2);
  
    
      
  
  return 0;
}
