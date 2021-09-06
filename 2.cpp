#include<bits/stdc++.h>


using namespace std;


   struct pessoa{
    int idade;
    char nome[50];
    double salario;
    };

    int main(){
    int i, teste,soma, menor=999, maior=0, pessoaMaiorIdade, pessoaMenorIdade;
    teste =10;

    struct pessoa p[teste];
     
    for(i=0;i<teste;i++){
        printf("Digite seu nome completo: \n");
        scanf(" %[^\n]s", p[i].nome);
        printf("Qual a sua idade: \n");
        scanf("%d",&p[i].idade);
        printf("Renda mensal: \n");
        scanf("%lf",&p[i].salario);

       
        if(menor>p[i].idade){
            menor = p[i].idade;
            pessoaMenorIdade=i;
        }
        if(maior < p[i].idade){
            maior = p[i].idade;
            pessoaMaiorIdade=i;
        }
        
    soma = p[i].idade + soma;
   
    }
        
        printf("---Registros Salvos---\n\n");

        for(i=0;i<teste;i++){
        printf("Nome completo: %s - Idade: %d anos - Faixa salarial: R$ %.2lf\n", p[i].nome,p[i].idade, p[i].salario);
    
        printf("\n");
        }
            printf("Media das idades: %d\n\n", soma/i);
            printf("Pessoa com menor idade: %s - Idade: %d anos\n\n",p[pessoaMenorIdade].nome,menor);
            printf("Pessoa com maior idade: %s - Idade: %d anos\n\n",p[pessoaMaiorIdade].nome,maior);
       
        return 0;
    }
        
