/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void)
{
    Funcionario f1;
    Funcionario f2;

    printf("\n--- CADASTRO DE FUNCIONARIO 1 ---\n");
    printf("Nome 1: ");
    scanf(" %49[^\n]", f1.nome);
    printf("Salario 1: ");
    scanf("%f", &f1.salario);
    printf("idade 1: ");
    scanf("%d", &f1.idade);

    printf("\n--- CADASTRO DE FUNCIONARIO 2 ---\n");
    printf("Nome 2: ");
    scanf(" %49[^\n]", f2.nome);
    printf("Salario 2: ");
    scanf("%f", &f2.salario);
    printf("Idade 2: ");
    scanf("%d", &f2.idade);

    printf("Funcionario 1 \nNome: %s\nSalario: %f\nIdade: %d\n", f1.nome,f1.salario,f1.idade);
    printf("Funcionario 2 \nNome: %s\nSalario: %f\nIdade: %d\n", f2.nome,f2.salario,f2.idade);

    if (f1.salario > f2.salario) {
       printf("Salario do primeiro funcionario e maior.\n deferenca: %f.2", f1.salario - f2.salario);
    } else if (f1.salario < f2.salario) {
       printf("Salario do segundo funcionario e maior.\n deferenca: %f.2", f2.salario - f1.salario);
    } else {
        printf("Os dois salarios sao iguais.");
    }
    return 0;
}