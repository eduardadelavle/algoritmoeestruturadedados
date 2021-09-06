#include <bits/stdc++.h>

using namespace std;


struct cliente {
    char identificador[100];
    char endereco[100];
    char email[100];
    int consumoAgua;
};



int main(){
    int i, qtd = 0;
    double taxa=0.00;
    struct cliente c[i];
    
    
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
    
    }

    printf("-----Relatorio------\n\n");
  

    for(i=0;i<qtd;i++){
   
    if(c[i].consumoAgua == 0) taxa = 0.00;   
    if(c[i].consumoAgua >= 1 && c[i].consumoAgua <= 5) taxa = 1.34;
    if(c[i].consumoAgua >= 6 && c[i].consumoAgua <= 9) taxa = 3.4;
    if(c[i].consumoAgua >= 10 && c[i].consumoAgua <= 14) taxa = 6.94;
    if(c[i].consumoAgua >= 15) taxa = 10.5;
    
    
    printf("Identificador do Cliente:  %s \n", c[i].identificador);
    printf("Endereco do cliente:%s \n", c[i].endereco);
    printf("E-mail do cliente: %s \n", c[i].email);
    printf("Consumo de agua em metros cubicos: %d \n", c[i].consumoAgua);
    printf("Valor total para pagar: %.2lf\n", (c[i].consumoAgua * taxa) + 15.78);
    }
    return 0;

}