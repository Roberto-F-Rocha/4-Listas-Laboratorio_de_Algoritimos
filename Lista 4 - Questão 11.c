#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 11. As lojas Brilho precisam de um programa para simular compras parceladas, no
qual o computador lê o código de cliente (fictício), o valor total da compra e um número de
prestações. O esquema de financiamento consiste no acréscimo de 4% de juros ao mês. De
posse dessas informações, crie o sistema da referida loja.
*/

int main(){
    setlocale(LC_ALL, "");
  
    int cod_crie, cod=0, prest, escolha, valor;
    float prestacao, parcela, total;
 
    do{
        printf("/ simulador de compras parceladas /\n\n");
        printf("crie um código \n:");
        scanf("%i", &cod_crie);

        system("cls");

        printf("insira o código criado \n:"); 
        
        while(cod != cod_crie){	
            scanf("%i", &cod);
 
            if(cod != cod_crie){
	            printf("ERROR!\n");
            }
            else{
	            printf("SUCCESSFUL \n\n");
            } 
        }
	    printf("informe o valor total da compra R$\n: ");
	    scanf("%i", &valor);
	    
        system("cls");

	    printf("informe o total e prestações: ");
	    scanf("%i", &prest);
	    
        system("cls");
	 
	    prestacao = prest + (prest*0.04);
	    parcela = valor / prest;
        total = parcela + prestacao; 
   
        printf("\no valor das prestações ao mês fica de : R$%.2f\n\n", total); 

        printf("gostaria de fazer outra simulação?\n |1| para sim\n |2| para não\n\n:");
        scanf("%i", &escolha); 
        
        system("cls");

    }while(escolha == 1);
 
    system("pause");
 return(0);
}