/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 5 
#include <stdio.h>

int main() {
    int vetor[5];
    int *ptr = vetor;   
    int i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor (via ponteiro):\n");
    for (i = 0; i < 5; i++) {
        printf("Posicao %d: %d\n", i, *(ptr + i));
    }

    return 0;
}