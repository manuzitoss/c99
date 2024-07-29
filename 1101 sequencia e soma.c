#include <stdio.h>

int main(){
int x,y,min,max,cont=0;
    int j=0;
    while(x!=0||y!=0){
        j++;
    scanf("%d %d", &x,&y);
        if(x<=0||y<=0){
            return 0;
        }else{
            
        }if (x<y){
            min=x;
            max=y;
        }
        else{
            min=y;
            max=x;
        }
        for(int i=min;i<=max;i++){
        printf("%d ",i);
        cont+=i;
    
        }
        printf("Sum=%d\n",cont);
            cont=0;
    }
        
   

        
    
return 0;
               
    
}        
