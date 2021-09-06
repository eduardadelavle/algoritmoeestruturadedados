#include<bits/stdc++.h>

using namespace std;

struct aluno {
    int matricula;
    char nome[50];
    double nota;
};


int main() {
    
    int i;
    double  somanotas=0, qtdAluno = 0;
    struct aluno alunos[10];
    
        for (i=0; i<10; i++) {
        printf("Informe a matricula do aluno: \n");
        scanf("%d", &alunos[i].matricula);
        printf("Informe o nome do aluno: \n");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Informe a nota: \n");
        scanf("%lf", &alunos[i].nota);
        somanotas = (somanotas + alunos[i].nota);
       
        }
        printf("---------Media da turma---------\n");
        
        printf("Media da turma: %.2f \n", somanotas/10);
        
       
        printf("\n---------Nome dos alunos aprovados---------\n");
        
        for(i=0;i<10;i++){
        if (alunos[i].nota >= 6) {
        printf("Aluno aprovado: %s - nota: %.2f \n", alunos[i].nome, alunos[i].nota);
        }
        }
        
         printf("\n---------Nomes que se iniciam com a letra L---------\n");
        
        for(i=0;i<10;i++){
        if(alunos[i].nome[0] == 'L' || alunos[i].nome[0] == 'l'){
          qtdAluno++;
          printf("Mostrar todos os nomes com inicial L: %s \n",alunos[i].nome);
        }
      }      
    
      printf("\nPorcentagem de alunos com a letra L: %.0f %%  \n\n",  (qtdAluno *100) / 10);

        return 0;
        
}

