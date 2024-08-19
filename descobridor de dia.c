
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

char *semana[] = {"sabado","domingo","segunda","terça","quarta","quinta","sexta"};
int dia,mes,anu;

    while (scanf("%d/%d/%d", &dia,&mes,&anu) != EOF){
        if (mes <3){//arruma os meses do ano
            mes+=12;
            anu--;
        }

        //calcula k e j
        int k = anu%100;
        int j = anu/100;//2 ultimos e primeiros digitos

        //calcula o dia da semana
        int ds = ((dia + 13*(mes+1)/5+k+(k/4)+(j/4)-2*j)%7);
        //print
        printf("%s\n", semana[ds]);
    }
  return 0;
}
