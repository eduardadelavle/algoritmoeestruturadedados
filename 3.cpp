#include<bits/stdc++.h>

using namespace std;

struct aluno {
    int matricula;
    char nome[50];
    double nota1, nota2;
 };

int main(){
     int i;
     double total;
     struct aluno RA[25];
     
     printf("-----Disciplina de Logica Matematica-----\n\n");
     
        for(i=0;i<25;i++){
        printf("Digite a matricula: \n");
        scanf("%d", &RA[i].matricula);
        printf("Nome do Aluno: \n");
        scanf(" %[^\n]",RA[i].nome);
        printf("Digite a nota da prova 1: \n");
        scanf("%lf",&RA[i].nota1);
        printf("Digite a nota da prova 2: \n");
        scanf("%lf",&RA[i].nota2);
        total = RA[i].nota1 + RA[i].nota2;
        
        }
        printf("---Registros Salvos---\n");


        for(i=0;i<25;i++){
        printf("Matricula do aluno: %d \n", RA[i].matricula);
        printf("Nome do Aluno: %s \n", RA[i].nome);
        printf("Notas : Nota1: %.2lf + Nota2: %.2lf \n", RA[i].nota1, RA[i].nota2);
        printf("total: %.2lf \n",total);
        }
        if (total >= 6) {
            printf("\nAprovado");
        }
        else {
            printf("\nReprovado");
        }
        return 0;

}

