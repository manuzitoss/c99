
#include <stdio.h>

int main() {

    int v[10],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    printf("(");
    for(int j=0;j<n;j++){
    printf("%d", v[j]);
    if(j<n-1){
        printf(", ");
    }
    }   
        printf(")");
    return 0;
}
