/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 3
#include <stdio.h>

int verificarPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

int main() {
    int n;

    printf("===== VERIFICADOR DE NUMEROS =====\n\n");
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (verificarPar(n))
        printf("\nO numero %d e par.\n", n);
    else
        printf("\nO numero %d e impar.\n", n);

    return 0;
}


