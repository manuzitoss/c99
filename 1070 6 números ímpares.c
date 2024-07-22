#include <stdio.h>

int main() {
  
int x, cont=0, n;
scanf("%d", &x);
for (n = x; n < x + 12; n++){ // n < x + 12 imprime a metade, os proximos 6 valores
  if (n%2 != 0){
    printf("%d\n", n);
  }
  
}
  

  
return 0;
}
