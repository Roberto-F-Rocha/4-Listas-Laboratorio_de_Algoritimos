#include <stdio.h>
#include <stdlib.h>

/*
Exercício 12. Aplicativo para pesquisa de mercado da Lanchonete Café Saboroso – Quando
um pedido é feito por telefone, o atendente solicita o CEP e a idade do cliente, que são
anotados com a quantidade de itens do pedido. Crie um programa que automatize esse
processo, implementando as tarefas que seguem:

I. O programa opera continuamente até que o funcionário insira um 0 para CEP
no final do dia. Se o funcionário inserir uma idade inválida (definida como
menos de 10 ou mais de 110), o programa alerta o funcionário sobre esse erro,
e pede que os dados sejam inseridos novamente;

II. Quando o atendente informa uma quantidade de itens menor do que 1 ou
maior do que 12, o programa emite um alerta;

III. No final do programa, devem ser exibidos quantos itens foram encomendados
por clientes que moram na mesma área da cafeteria (CEP = 59905000) e
quantos foram comprados por clientes de outras áreas. Também deve ser
exibido a quantidade de itens encomendados por clientes com menos de 30
anos e por clientes com 30 anos ou mais

*/
int main(){

    int idade_clientes, CEP, area_da_cafeteria = 0, outra_area = 0;
	int pedidos = 0, pedido_idade_menor_30 = 0, pedido_idade_maior_30 = 0;;

    do{
    	printf("\\ LANCHONETE CAFE SABOROSO \\\n");
        printf("ola boa noite, poderia me informar o seu CEP: ");
        scanf("%i", &CEP);
        
        if(CEP == 59905000){
            area_da_cafeteria += 1;
        }
        if(CEP != 59905000){
            outra_area += 1;
        }
        if(CEP == 0){
        	printf("itens encomendados por clientes que moram na mesma area da cafeteria: %i\n\n", area_da_cafeteria);
    		printf("itens encomendados por clientes de outra area: %i\n\n", outra_area);

    		printf("quantidade de itens encomendados por clientes com menos de 30 %i\n\n", pedido_idade_menor_30);
    		printf("quantidade de itens encomendados por clientes maiores de 30 %i\n\n", pedido_idade_maior_30);
        	
            system("pause");    
         return(0);	
		}

        printf("poderia me informar a sua idade: ");
        scanf("%i", &idade_clientes);

        if(idade_clientes < 10 || idade_clientes > 110){
            printf("ATENCAO \n //alerta//\a\n");
            while(idade_clientes < 10 || idade_clientes > 110){
            	printf("poderia me informar a sua idade: ");
                scanf("%i", &idade_clientes);
            } 
            system("cls");
        }

        printf("quantidade dos pedidos:");
        scanf("%i", &pedidos);

        if(pedidos < 1 || pedidos > 12){
            printf("ATENCAO \n //alerta//\a");
        }
        if(idade_clientes < 30){
            pedido_idade_menor_30 += pedidos; 
        }
        if(idade_clientes >= 30){
            pedido_idade_maior_30 += pedidos; 
        }
        
        system("cls");
    }while(CEP != 0); 

    system("pause");    
 return(0);
}