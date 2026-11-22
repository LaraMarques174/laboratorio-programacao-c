/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 2 

#include <stdio.h>
#include <string.h>

int main() {

    char produto[50];
    char produtoCopia[50];
    char categoria[20];
    char descricao[100];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%49s", produto);

    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    
    strcpy(produtoCopia, produto);

    printf("\n===== RESUMO =====\n");

    printf("Produto: %s\n", produtoCopia);
    printf("Caracteres: %d\n", (int)strlen(produto));

    
    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    }
    else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    }
    else {
        printf("Categoria invalida!\n");
    }

   
    strcpy(descricao, "Produto: ");
    strcat(descricao, produtoCopia);

    printf("\nDescricao: %s\n", descricao);

    printf("Cadastro concluido!\n");

    return 0;
}