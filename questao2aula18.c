/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 2 
#include <stdio.h>

double maiorPreco(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double p1, p2;

    printf("===== COMPARADOR DE PRECOS =====\n\n");
    printf("Preco 1: ");
    scanf("%lf", &p1);
    printf("Preco 2: ");
    scanf("%lf", &p2);

    if (p1 == p2)
        printf("\nOs precos sao iguais.\n");
    else
        printf("\nMaior preco: R$ %.2f\n", maiorPreco(p1, p2));

    return 0;
}



