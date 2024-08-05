#include <stdio.h>
int main(){

  int i,x[10],c=0;
  for(i=0;i<10;i++){
    scanf("%d",&x[i]);
    if(x[i]>0){
      printf("X[%d] = %d\n",c++,x[i]);
    }else{
      printf("X[%d] = 1\n",c++);
    }
  }
 
return 0;
}
