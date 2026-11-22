/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 4 
#include <stdio.h>

int dobro(int q);   

int main() {
    int qtd;
    printf("===== CONTROLE DE ESTOQUE =====\n\n");
    printf("Quantidade inicial: ");
    scanf("%d", &qtd);
    printf("\nQuantidade inicial: %d\n", qtd);
    printf("Quantidade apos duplicacao: %d\n", dobro(qtd));
    return 0;
}

int dobro(int q) {
    return q * 2;
}