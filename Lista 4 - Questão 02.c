#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 02. Crie um programa que imprima a tecla digitada até que o usuário digite ‘x’.
*/

int main(){
    setlocale(LC_ALL, "");
    
    char tecla;   
	printf("digite uma letra \n");
    
    do{
		scanf("%c", &tecla);
	}while (tecla != 'x');
    
	system("pause");
 return(0);
		
}