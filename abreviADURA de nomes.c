
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char nome[50] = {""};
  char sobrenome[50] = {""};
  int i, n, j, p;
  while (scanf("%[^\n]s", nome) != EOF) { // enquanto for diferente de \n
    getchar();
    n = strlen(nome);
    j = n;
    // abreviar o nome
    do {
      j--;
    } while (nome[j] != ' ');
    strncpy(sobrenome, &nome[j + 1], n - j);
    strcat(sobrenome, ", "); // coloca virgula
    for (i = 0; nome[i] != ' '; i++);// acha o 1 nome
    strncat(sobrenome, nome, i); // add o nome 1 na string com o ultimo nome
    strncat(sobrenome, " ", i); 
    for(i = 0; i < j; i++){
        if (nome[i] == ' '){
            if (isupper(nome[i+1])){
            strncat(sobrenome, &nome[i+1], 1);
            strcat(sobrenome, ". "); // coloca ponto
            }
        }
    }
    printf("%s", sobrenome);
  }
  return 0;
}
