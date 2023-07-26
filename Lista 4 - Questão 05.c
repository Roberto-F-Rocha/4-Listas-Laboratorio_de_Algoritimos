#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 05. Crie um programa que receba um número inteiro e positivo do usuário de
forma indeterminada. A condição de parada será quando o usuário inserir um número neutro
ou negativo. Ao encerrar a inserção de números, você deve calcular e apresentar:

I. A média de todos os números inteiros e positivos inseridos pelo usuário;
II. O maior e menor números inseridos;
III. O total de números pares e ímpares inseridos;
IV. O total de múltiplos de 4 inseridos.
*/

int main(){
    setlocale(LC_ALL, "");

    int cont_media=0,n1=0, maior_n=0, menor_n, multiplos=0, cont_par=0, cont_impar=0; 
    float media=0;

    printf("informe um número :\n");
    do{
        scanf("%i", &n1);
        if(n1 <= 0){
    	    media = media/cont_media;
            printf("\n+ média de todos os números %.1f\n", media);
            printf("+ maior numero digitado : %i\n", maior_n);
            printf("+ menor numero digitado : %i\n", menor_n);
            printf("+ O total de números pares : %i\n+ O total de números ímpares: %i\n", cont_par, cont_impar);
            printf("+ O total de múltiplos de 4 inseridos %i\n\n", multiplos);
            system("pause");
         return(0);
        }

        if(n1%2==0){
    	    cont_par++;
	    }
	    else{
		    cont_impar++;
	    }
        if(n1 % 4 == 0){
            multiplos++;
	    }
        if(n1 > 0){
    	    media=media+n1;	
	        cont_media = cont_media + 1;
	    }
        if(n1 > maior_n){
            maior_n = n1;
	    } 
	    if(n1 < menor_n){
	 	    menor_n = n1;
        }
        else{
            menor_n = menor_n;
        }	
    
  	}while(n1 > 0);

  	system("pause");
 return(0);
}