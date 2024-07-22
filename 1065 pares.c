#include <stdio.h>

int main() {
  
int n, cont = 0, a;

  for(n=0;n<5;n++){
    scanf("%d", &a);
    if (a%2==0){
      cont++;
      
    }
  }
printf("%d valores pares\n", cont);
  
return 0;
}
