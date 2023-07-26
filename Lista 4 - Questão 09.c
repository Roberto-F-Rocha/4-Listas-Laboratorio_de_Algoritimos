#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 09. Considere uma cidade A, com 16000 habitantes e taxa de natalidade de 3% ao
ano. Considere também uma cidade B, com 25000 habitantes e uma taxa de natalidade de
2,5% ao ano. Crie um programa que seja capaz de calcular e apresentar o tempo necessário
para que a população da cidade A ultrapasse a população da cidade B.
*/

int main() {
    setlocale(LC_ALL, "");
  
    int A, B, anos=0;
    A = 16000, B = 25000;

	while(A < B){
		A = A + (A*0.03);
        B = B + (B*0.025);  
		anos++;	
	}
    printf("para que a população da cidade A ultrapasse a população da cidade B. serão necessarios %i anos\n\n", anos); 
    
    system("pause");
 return(0);
}