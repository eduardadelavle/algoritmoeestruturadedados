#include<bits/stdc++.h>


using namespace std;


struct biblioteca {
	char autor[50], editora[50], obra[50], doacao;
	int codigo, area;
};


    int main(){

        struct biblioteca ciencias[1500], humanas[1500], biologicas[1500];
    	int opcao=0,e=0, h=0, b=0,menu, c, cd, i;
        bool flag=false;

	do {
    	printf("Escolha uma das opções: \n");
    	printf("1 - Inserir uma obra. \n");
    	printf("2 - Consultar uma obra. \n");
    	printf("3 - Sair. \n");
    	scanf("%d", &menu);
	    switch(menu){
	
		case 1:

            printf ("Informe Area do Conhecimento Para Cadastramento \n");
            printf ("Opção 1-Ciencias\n");
            printf ("Opção 2-humanas\n");
            printf ("Opção 3-biologicas\n");
            printf ("Escolha uma das opções:\n");
            scanf("%d", &c);

		if(c == 1) {
		        ciencias[e].area=c;
				printf("Codigo de catalogacao:\n");
				scanf(" %d", &ciencias[e].codigo);
				
				printf("Doacao: (s/n)\n");
				scanf(" %c", &ciencias[e].doacao);

				printf("Digite o nome da obra\n");
				scanf(" %[^\n]", ciencias[e].obra);
					
				printf("Digite o nome do autor: \n");
				scanf(" %[^\n]", ciencias[e].autor);
				
				printf("Digite o nome da editora: \n");
				scanf(" %[^\n]", ciencias[e].editora);
				e++;
		   	}
		   	else if(c==2){
		   	humanas[h].area=c;
              printf("Codigo de catalogacao:\n");
              scanf(" %d", &humanas[h].codigo);
              
              printf("Doacao: (s/n)\n");
              scanf(" %c", &humanas[h].doacao);
    
              printf("Digite o nome da obra\n");
              scanf(" %[^\n]", humanas[h].obra);
                
              printf("Digite o nome do autor: \n");
              scanf(" %[^\n]", humanas[h].autor);
              
              printf("Digite o nome da editora: \n");
              scanf(" %[^\n]", humanas[h].editora);
              h++;
		   	}
		   	else if(c==3){
		   	   biologicas[b].area=c;
              printf("Codigo de catalogacao:\n");
              scanf(" %d", &biologicas[b].codigo);
              
              printf("Doacao: (s/n)\n");
              scanf(" %c", &biologicas[b].doacao);
    
              printf("Digite o nome da obra\n");
              scanf(" %[^\n]", biologicas[b].obra);
                
              printf("Digite o nome do autor: \n");
              scanf(" %[^\n]", biologicas[b].autor);
              
              printf("Digite o nome da editora: \n");
              scanf(" %[^\n]", biologicas[b].editora);
              b++;
		
		   	}
	    break;
	    case 2:
    			printf ("Informe o codigo da area: \n");
                printf ("Opção 1-Ciencias\n");
                printf ("Opção 2-humanas\n");
                printf ("Opção 3-biologicas\n");
                scanf("%d", &c);
    		    printf("Digite o codigo de catalogacao: \n");
    			scanf(" %d", &cd);
				flag=false;
				if(c==1){
				    for(i=0;i<e;i++){
					    if(cd==ciencias[i].codigo){
				            printf("Digite o cod. de catalogacao %d\n:" , ciencias[i].codigo);
				            printf("Doacao: %c\n" , ciencias[i].doacao);
				            printf("Obra: %s\n:" , ciencias[i].obra);
				            printf("Autor: %s\n:" , ciencias[i].autor);
				            printf("Editora: %s\n:" , ciencias[i].editora);
				            flag=true;
					    }
				    }
					    
					   if(flag==false){
					   printf("Codigo de catalogacao inexistente de Ciencias\n");    
					   }
				    }
				
        		else if(c==2){
        		for(i=0;i<h;i++){
                    if(cd==humanas[i].codigo){
                      printf("Digite o cod. de catalogacao %d\n:" , humanas[i].codigo);
                      printf("Doacao: %c\n" , humanas[i].doacao);
                      printf("Obra: %s\n:" , humanas[i].obra);
                      printf("Autor: %s\n:" , humanas[i].autor);
                      printf("Editora: %s\n:" , humanas[i].editora);
                      flag=true;
                    }
                 } 
          
                 if(flag==false){
                     printf("Codigo de catalogacao inexistente de Humanas\n");    
            }
        		}
        		else if(c==3){
        		    
        		  for(i=0;i<e;i++){
                 if(cd==biologicas[i].codigo){
                      printf("Digite o cod. de catalogacao %d\n:" , biologicas[i].codigo);
                      printf("Doacao: %c\n" , biologicas[i].doacao);
                      printf("Obra: %s\n:" , biologicas[i].obra);
                      printf("Autor: %s\n:" , biologicas[i].autor);
                      printf("Editora: %s\n:" , biologicas[i].editora);
                      flag=true;
            }
          } 
          
                if(flag==false){
                printf("Codigo de catalogacao inexistente de biologicas\n");    
          }
        		    
        		}
        		break;
	       }
        }while(menu != 3);
	}
        
