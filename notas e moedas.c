#include <stdio.h>

int main() {

    long val, moedas;
        
    scanf("%ld.%ld", &val, &moedas);
    

    printf("NOTAS:\n");
    printf("%ld nota(s) de R$ 100.00\n", val/100);
    val %= 100;
    printf("%ld nota(s) de R$ 50.00\n", val/50);
    val %= 50;
    printf("%ld nota(s) de R$ 20.00\n", val/20);
    val %= 20;
    printf("%ld nota(s) de R$ 10.00\n", val/10);
    val %= 10;
    printf("%ld nota(s) de R$ 5.00\n", val/5);
    val %= 5;
    printf("%ld nota(s) de R$ 2.00\n", val/2);
    val %= 2;

    printf("MOEDAS:\n");
    printf("%ld moeda(s) de R$ 1.00\n", val/1);
    printf("%ld moeda(s) de R$ 0.50\n", moedas/50);
    moedas %= 50;
    printf("%ld moeda(s) de R$ 0.25\n", moedas/25);
    moedas %= 25;
    printf("%ld moeda(s) de R$ 0.10\n", moedas/10);
    moedas %= 10;
    printf("%ld moeda(s) de R$ 0.05\n", moedas/5);
    moedas %= 5;
    printf("%ld moeda(s) de R$ 0.01\n", moedas/1);


    return 0;
}
