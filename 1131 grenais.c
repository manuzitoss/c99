#include <stdio.h>

int main(){
//variaveis
int inter,grebio;
int umd,vinter=0,vgrebio=0,emapate=0;
    for(int i=0; ;i++){
        scanf("%d %d",&inter,&grebio);
            if(inter>grebio)
                vinter++;
            else if(grebio>inter)
                vgrebio++;
            else if(grebio==inter)
                emapate++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&umd);
            if(umd==1){      
            }else if(umd==2){
                break;
            }
    }
            printf("%d grenais\n",vinter+vgrebio+emapate);
            printf("Inter:%d\n",vinter);
            printf("Gremio:%d\n",vgrebio);
            printf("Empates:%d\n",emapate);
            if(vinter>vgrebio)
                printf("Inter venceu mais\n");
            else if(vgrebio>vinter)
                printf("Gremio venceu mais\n");
            else if(vgrebio==vinter)
                printf("Nao houve vencedor\n");

        


return 0;
}
