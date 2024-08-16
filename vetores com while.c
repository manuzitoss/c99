
#include <stdio.h>

int main() {

    int v[20];
    int i = 0,n=0;
    while(scanf("%d",&v[n])&&(v[n])){
        n++;
    }
    for (i=0;i<n;i++){
        printf("|"), printf("%4d", v[i]), printf("|\n");
    }
    return 0;
}
