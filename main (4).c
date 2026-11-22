/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nomes[5][90];
    int idade[5][10];
     int pressão[5];
     int colesterol[5];
     int peso[5];
     int altura[5];
     int dados [5][8];
   
    int qtdpac;
   
    printf("========= SISTEMA DE ANÁLISE DE RISCO======== \n");


    printf("Quantidade de pacientes: ");
    scanf("%d",&qtdpac);
   
   
        for (int i = 0; i < (qtdpac); i++) {
       
         printf("Nome do Paciente %d: " , i+1);
        scanf("%89s", nomes[i]);
       
       
        printf("Idade do Paciente %d: ", i+1);
        scanf("%d", &idade[i]);
       
        printf("Pressão do Paciente %d: ", i+1);
        scanf("%d", &pressão[i]);
       
          printf("Colesterol do Paciente %d: ", i+1);
        scanf("%d", &colesterol[i]);
       
               printf("Peso do Paciente %d: ", i+1);
        scanf("%d", &peso[i]);
       
       
                printf("Altura do Paciente %d: ", i+1);
        scanf("%d", &altura[i]);
       
       


            printf("Tem tabagismo? (1-Sim / 0-Nao): ");
               scanf("%d", &dados[i][0]);

              printf("Tem diabetes? (1-Sim / 0-Nao): ");
              scanf("%d", &dados[i][1]);

                printf("Historico de doenca cardiaca? (1-Sim / 0-Nao): ");
                scanf("%d", &dados[i][2]);
           
                printf("Tem sedentarismo? (1-Sim / 0-Nao): ");
                scanf("%d", &dados[i][3]);
           
                printf("Alimentacao rica em ultraprocessados? (1-Sim / 0-Nao): ");
                scanf("%d", &dados[i][4]);
           
                printf("Tem estresse cronico? (1-Sim / 0-Nao): ");
                scanf("%d", &dados[i][5]);
           
                printf("Tem sono inadequado? (1-Sim / 0-Nao): ");
                scanf("%d", &dados[i][6]);
           
                printf("Sexo biologico masculino? (1-Sim / 0-Nao): ");
                scanf("%d", &dados[i][7]);
}
   

   
    for (int i = 0; i < (qtdpac); i++) {
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}
{
int pontos = 0;

float IMC = peso[i]/(altura[i]*altura[i]);


if(idade[i] >= 65)
    pontos+= 3;
   
if(pressão[i] >=160)
    pontos+= 3;
   
if(dados[i][0] ==1)
    pontos+=3;
   
if (dados[i][1] == 1)
    pontos+=2;
   
if (dados[i][2] = 1)
    pontos+=2;
   
if (colesterol[i]>= 160)
    pontos+=2;
 
if (IMC>= 30)
    pontos+=2;  

if (dados[i][3] == 1)
    pontos+=1;  

if (dados[i][4] == 1)
    pontos+=1;  

if (dados[i][5] == 1)
    pontos+=1;  
   
if (dados[i][6] == 1)
    pontos+=1;
   
if (dados[i][7] == 1)
    pontos+=1;
   
return pontos;
}

char* classificarRisco (int pontos) {
    if (pontos >= 0 && pontos <= 4) {
        return "Menor de 10%";
    }
    else if (pontos >= 5 && pontos <= 9) {
        return "Entre 10% e 20%";
    }
    else if (pontos >= 10 && pontos <= 14) {
        return "Entre 20% e 30%";
    }
    else if (pontos >= 15 && pontos <= 18) {
        return "Entre 30% e 50%";
    }
    else if (pontos >= 19 && pontos <= 22) {
        return "Acima de 50%";
}
    else {
        return "Pontuação Inválida"
    }
   
    void exibirResultados (char nome[], int pontos)
    printf("/n===== RELATÓRIO DE RISCO ======/n");
    printf("Nome: %s/n", nome);
    printf("Classificação: %s/N ",classificarRisco(pontos) );