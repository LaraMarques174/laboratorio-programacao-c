/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*atividade 1 14*/
#include <stdio.h>
    int main(void) {
    int numeros[2][2] = {
    {2, 4},
    {6, 8}
    };
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", numeros[i][j]);
    }
        printf("\n");
   
       
    }
return 0;
}

/*atividade 2 14*/
#include <stdio.h>
    int main(void) {
    int numeros[2][2] = {
        {i, j},
        {k, l},
    };
   
        printf("Digite um número: %d ", i);
        scanf
   
    }
   

//atividade 3 14
#include <stdio.h>
int main(void) {
    int matriz[2][3] = {
        {1, 1, 1},
        {1, 1, 1}
    };
    int soma;
    int i;
    int j;
 
        for (int j = 0; j < 3; j++) {
        soma += matriz[i][j];
 
        for (int i = 0; i < 2; i++) {
        soma += matriz[i][j];
    }
    printf("Soma da coluna %d: %d\n", j, soma);
    }
 return 0;
}

