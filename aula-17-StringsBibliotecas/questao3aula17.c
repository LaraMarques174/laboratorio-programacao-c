/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 3 

#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    char nomeCopia[50];
    char codigo[10];
    char curso[50];
    char mensagem[100];

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    
    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    }
    else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    }
    else {
        strcpy(curso, "Curso invalido");
    }


    strcpy(nomeCopia, nome);

    
    strcpy(mensagem, "Ola, ");
    strcat(mensagem, nomeCopia);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");

    printf("Estudante: %s\n", nomeCopia);
    printf("Curso: %s\n", curso);
    printf("Caracteres no nome: %d\n", (int)strlen(nome));

    printf("\n%s\n", mensagem);

    return 0;
}


