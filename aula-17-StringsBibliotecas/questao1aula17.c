/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Questão 1 
#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    char perfil[20];
    char nomeConfirmacao[50];
    char mensagem[100];

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    
    strcpy(nomeConfirmacao, nome);

    
    printf("\n===== DADOS CADASTRADOS =====\n");

    printf("Nome: %s\n", nomeConfirmacao);
    printf("Quantidade de caracteres: %d\n", (int)strlen(nome));

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    }
    else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Comum\n");
    }
    else {
        printf("Perfil invalido!\n");
    }

    
    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, nomeConfirmacao);
    strcat(mensagem, "!");

    printf("\n%s\n", mensagem);

    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
