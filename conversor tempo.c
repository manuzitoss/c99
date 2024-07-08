#include <stdio.h>

int main() {

    int seg, a, b, c;

    scanf("%d", &seg);

    a = seg/3600;
    seg %= 3600;
    b = seg/60;
    seg %= 60;
    c = seg;
        
    printf("%d:%d:%d", a, b, c);

    return 0;
}


