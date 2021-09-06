#include <bits/stdc++.h>
using namespace std;

struct cliente {
    char identificador[100];
    char endereco[100];
    char email[100];
    char tarja[200];
    int consumoAgua;
};



int main (){
    int i;
    int qtd = 0; 
    double taxa = 0.00,  totalConsumido = 0, percentual;
    
    cliente c[i];
    printf("Informe a quantidade de clientes:\n");
    scanf("%i",&qtd);

 
    for(i=0;i<qtd;i++){
    printf("Identificador do Cliente: \n");
    scanf(" %[^\n]", c[i].identificador);

    printf("Endereco do cliente: \n");
    scanf(" %[^\n]", c[i].endereco);
  
    printf("E-mail do cliente: \n");
    scanf(" %[^\n]", c[i].email);
   
    printf("Consumo de agua em metros cubicos: \n");
    scanf("%i",&c[i].consumoAgua);
    

   totalConsumido += c[i].consumoAgua;
  
    }
  printf("-----Relatorio------\n\n");
    
    for(i=0;i<qtd;i++){
    if(c[i].consumoAgua == 0){
    totalConsumido = 15.78 + (c[i].consumoAgua * 0.00);
    strcpy(c[i].tarja, "Branca");  
    }
    else if(c[i].consumoAgua >= 1 && c[i].consumoAgua <= 5){
    totalConsumido = 15.78 + (c[i].consumoAgua * 1.34);
    strcpy(c[i].tarja, "Verde");  
   }
   else if(c[i].consumoAgua >= 6 && c[i].consumoAgua <= 9){ 
    totalConsumido = 15.78 + (c[i].consumoAgua * 3.40);
    strcpy(c[i].tarja,"Amarela");
   }
    else if(c[i].consumoAgua >= 10 && c[i].consumoAgua <= 14){
    totalConsumido = 15.78 +  (c[i].consumoAgua * 6.94);
    strcpy(c[i].tarja, "Laranja");
    }
    else if(c[i].consumoAgua >=15){
    totalConsumido = 15.78 + (c[i].consumoAgua * 10.50); 
    strcpy(c[i].tarja , "Vermelha");
    percentual =  (10.50 / totalConsumido) *100; // só da vermelha
    }
    
    printf("Identificador do Cliente:  %s \n", c[i].identificador);
    printf("Endereco do cliente:%s \n", c[i].endereco);
    printf("E-mail do cliente: %s \n", c[i].email);
    printf("Consumo de agua: %d \n", c[i].consumoAgua);
    printf("Valor total para pagar: %.2lf\n", totalConsumido);
    
    printf("Percentual tarja vermelha: %.0f %% \n\n",  percentual);
    
}
    return 0;
}