#include <stdio.h>
#include <limits.h>

int main(){

int n,x[1000],menor=INT_MAX,pos,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  if(x[i]<menor){
    menor=x[i];
    pos = i;
  }
  }
  printf("Menor valor: %d\nPosicao: %d\n",menor,pos);
    
return 0;
}
