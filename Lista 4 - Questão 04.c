#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 04. Crie um programa que apresente a tabuada de um número inteiro e positivo
inserido pelo usuário. A execução deverá ser repetida até que o usuário insira um número
neutro ou negativo.
*/

int main(){
    setlocale(LC_ALL, "");

	int n1=1, c=1;
	printf(" /TABUADA/ \n");

    while (n1 > 0){
		scanf(" %i", &n1);
		do{
		    printf("%i X %i = %i \n", n1, c, c * n1);
			c++;
		}while(c <= 10);

		c=1;
	}
    
    system("pause");
 return(0);
}