#include<bits/stdc++.h>

using namespace std;

struct agenda{
    char nome[50];
    char telefone[20];
    int dia, mes;
};

int main(){
    int i=0, cont=0;
    struct agenda cadastro[40];
    

        printf("---Cadastro para consulta---\n");

        for(i=0; i<40; i++){
            printf("Nome Completo: \n");
            scanf(" %[^\n]", cadastro[i].nome);
            printf("Telefone: \n");
            scanf(" %[^\n]", cadastro[i].telefone);
            printf("Dia da consulta: \n");
            scanf("%d", &cadastro[i].dia);
            printf("Mes de consulta: \n");
            scanf("%d", &cadastro[i].mes);
        }

    cont=0;        
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 1){
            cont++;
            if(cont==1){
                printf("\nAgenda de Janeiro\n");                
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n",cadastro[i].nome, cadastro[i].dia);
          
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 2){
            cont++;
            if(cont==1){
                printf("\nAgenda de Feveriro\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 3){
            cont++;
            if(cont==1){
                printf("\nAgenda de Marco\n");
            }
            
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 4){
            cont++;
            if(cont==1){
                printf("\nAgenda de Abril\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 5){
            cont++;
            if(cont==1){
                printf("\nAgenda de Maio\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 6){
            cont++;
            if(cont==1){
                printf("\nAgenda de Junho\n"); 
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 7){
            cont++;
            if(cont==1){
                printf("\nAgenda de Julho\n"); 
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 8){
            cont++;
            if(cont==1){
                printf("\nAgenda de Agosto\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 9){
            cont++;
            if(cont==1){
                printf("\nAgenda de Setembro\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 10){
            cont++;
            if(cont==1){
                printf("\nAgenda de Outubro\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome,  cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 11){
            cont++;
            if(cont==1){
                printf("\nAgenda de Novembro\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(cadastro[i].mes == 12){
            cont++;
            if(cont==1){
                printf("\nAgenda de Dezembro\n");
            }
            printf("Nome do Paciente: %s - Consulta agendada para o dia: %d \n", cadastro[i].nome, cadastro[i].dia);
        }
    }
   
return 0;
}