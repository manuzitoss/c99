#include <stdio.h>
int main(){

  int x,k,i,soma=0;
  while(scanf("%d",&x)&&(x!=0)){
      if(x%2!=0){
        x++;       
      }
    for(i=0;i<5;i++){
      soma += x+2*i; //vai fazer x+2 4 vezes (*i) o i sendo i<5
    }
  printf("%d\n",soma);
    soma=0;
  }
return 0;
}
