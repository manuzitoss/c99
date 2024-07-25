
#include <stdio.h>

int main() {
  int i, x, m=0, p=0;
  for(i=0;i<100;i++){
    scanf("%d", &x);
    if(x>m){
      m=x;
      p=i+1;
  }
    }
  printf("%d\n", m);
  printf("%d\n", p);

return 0;
}
