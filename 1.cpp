#include<bits/stdc++.h>

using namespace std;

struct pessoa{
    int idade;
    char nome[50];
    double salario;
  
 };

int main(){
      int i;
     struct pessoa p[10];
     
        for(i=0;i<10;i++){
        printf("Digite seu nome completo: \n");
        scanf(" %[^\n]s", p[i].nome);
        printf("Qual a sua idade: \n");
        scanf("%d",&p[i].idade);
        printf("Renda mensal: \n");
        scanf("%lf",&p[i].salario);
        }
        printf("---Registros Salvos---\n");


        for(i=0;i<10;i++){
        printf("Nome completo: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Faixa salarial: R$ %.2lf\n", p[i].salario );
        }
       
        return 0;
}
