#include <stdio.h>

int main(){
    long long int a, b;
    // Leia os pares de números até o final do arquivo (EOF) = faz rodar pra sempre
    while(scanf("%lld %lld", &a, &b) != EOF){ 
    // Calcule a soma no modo "Mofiz" usando a operação XOR (^)
        printf("%lld\n", a ^ b);
    }

    return 0;
}
