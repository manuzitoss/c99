
#include <stdio.h>

int main() {
  int i, cont=0;
  float x, cal=0, cont2=0;
  for (i=0;i<6;i++){
    scanf("%f", &x);
    if(x>0){
      cont++;
      cont2 +=x;   
      
    }
  }
  cal = (cont2/cont);
  printf("%d valores positivos\n", cont);      
  printf("%.1f\n", cal);
return 0;
}
