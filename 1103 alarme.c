#include <stdio.h>

int main(){

int hi,mi,hf,mf,md;
int i=0;
        //faz todos darem vdd c todos forem vdds
    while(scanf("%d %d %d %d",&hi,&mi,&hf,&mf)&&(hi||mi||hf||mf)){
        //todos em min, ex 1h10, 10 = 10 + 1*60=70
        mi += hi*60;
        mf += hf*60;

        //tempo de descanso
        if(mi<mf){
            md=mf-mi;
        }else{
            md = mf+1440-mi;
        }
        printf("%d\n",md);
    
            
            
    
                
    }
    









    
    
return 0;}        
