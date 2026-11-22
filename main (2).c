/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 2
#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero;
    int i;

    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita!\n");
        return 1;
    }

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }
    fclose(arquivo);
    printf("\nNumeros gravados com sucesso!\n");

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    printf("\nNumeros armazenados no arquivo:\n");
    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }
    fclose(arquivo);

    return 0;
}