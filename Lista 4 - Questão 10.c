#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 10. Crie um programa que receba um inteiro positivo não nulo e calcule
iterativamente sua raiz quadrada aproximada. A raiz quadrada de um número n é igual à
quantidade de números ímpares consecutivos (a partir do 1) que, somados, resultam n. Por
exemplo, a raiz quadrada aproximada de:
- 25 é 5 (1 + 3 + 5 + 7 + 9)
- 36 é 6 (1 + 3 + 5 + 7 + 9 + 11)
*/

int main() {
    setlocale(LC_ALL, "");
  
    int n1, cont=1 ,soma=0, i=0;
    float raiz;
 
    printf("insira um número :\n");

    do{
        scanf("%i", &n1);
        while(soma<n1){	
            printf("%i + ", cont);
            cont+=2;
            soma = cont + soma;
            i++;
        }
        printf("a raiz de %i é %.1d ", n1, i);
    }while(n1 > 0);
	 
    system("pause");
 return(0);
}