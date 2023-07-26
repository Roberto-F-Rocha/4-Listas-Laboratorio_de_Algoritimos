#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> 

/*
Exercício 06. Crie um programa que peça ao jogador para adivinhar o número da sorte (entre
0 e 100) gerado aleatoriamente. O jogador vai entrando com números e o programa vai
informando se o número do jogador é maior ou menor que o número da sorte. Quando o
jogador acertar o número, o programa deve imprimir “ACERTOU!” e informar o número de
tentativas do jogador. Para gerar um número entre 0 e 100, use o comando: num =
rand()%100;
*/

int main() {
    setlocale(LC_ALL, "");

    int n1, num;

    printf("insira um número \n:");

    srand(time(NULL));
    num = rand()%100;	

    while(n1 != num){
	    scanf("%i", &n1); 

	    if(n1 > num){
		    printf("O número %i é maior : VOCÊ ERROU :( \n", n1);
	    }	
	    else if(n1 < num){
		    printf("O número %i é menor : VOCÊ ERROU :( \n", n1);
	    }   
	    else if(n1==num){
		    printf(" / ACERTOU! / :) \n\n");
		    system("pause");
         return(0);
	    }
    }

    system("pause");
 return(0);
}