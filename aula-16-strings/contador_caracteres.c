/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>

int main() {

    char palavra[100];
    int i;
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra possui %d caracteres.\n", contador);

    return 0;
}


