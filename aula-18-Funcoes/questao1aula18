/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 1 
#include <stdio.h>

void exibirMenu() {
    printf("\n===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
}

double somar(double a, double b)       { return a + b; }
double subtrair(double a, double b)    { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b)     { return a / b; }

int main() {
    int opcao;
    double n1, n2;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;
        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!\n");
            continue;
        }

        printf("Primeiro numero: ");
        scanf("%lf", &n1);
        printf("Segundo numero: ");
        scanf("%lf", &n2);

        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", somar(n1, n2)); break;
            case 2: printf("Resultado: %.2f\n", subtrair(n1, n2)); break;
            case 3: printf("Resultado: %.2f\n", multiplicar(n1, n2)); break;
            case 4:
                if (n2 == 0) printf("Erro: divisao por zero!\n");
                else printf("Resultado: %.2f\n", dividir(n1, n2));
                break;
        }
    } while (opcao != 0);

    return 0;
}


