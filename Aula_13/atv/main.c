#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opc = 0;
	int idade = 0;
	int idades[8];
	int i = 0; 
	int o = 0;
	

	for (i = 0; i <= 7; i++){
		idades[i] = 0;
	}
	
	while (o != 1){
		
		printf("\n\n...::: IDADES :::...    \n");
		printf("\n\n1.Zerar             \n");
		printf("2.Carregar              \n");
		printf("3.Imprimir              \n");
		printf("4.Somar                 \n");
		printf("5.Pares                 \n");
		printf("6.Contar pares          \n");
		printf("7.Somar pares           \n");
		printf("8.Menores idade         \n");
		printf("9.Contar maiores idade  \n");
		printf("10.Somar maiores idade  \n");
		
		scanf("%i", &o);
		
		
		if (o == 1){
			
			for (i = 0; i <= 7; i++){
				idades[i] = 0;
			}
			
		} else if(o == 2){
			
			for (i = 0; i <= 7; i++){
				
				printf("\nInforme a idade na posição %i: ", i+1);
				scanf("%i", &idade);
				idades[i] = idade;
			}
			
		
		}else if(o == 3){
			
			for (i = 0; i <= 7; i++){
				
				printf("\nIdade %i: %i", i+1, idades[i]);
				
			}
			
		}else if(o == 4){
			
			int soma = 0;
			
			for (i = 0; i <= 7; i++){
				
				soma = soma + idades[i];
				
			}
			
			printf("\nSoma de todas as idades: %i", soma);
			
		}else if(o == 5){
			
			for (i = 0; i <= 7; i++){
				
				if((idades[i] % 2) == 0){
					printf("\nidade par: %i", idades[i]);
				}
				
			}
			
		}else if(o == 6){
			
			int soma = 0;
			
			for (i = 0; i <= 7; i++){
				
				if((idades[i] % 2) == 0){
					soma = soma + 1;
				}
				
			}
			
			printf("\n a quantidade de pares é: %i", soma);
			
		}else if(o == 7){
			
			int soma = 0;
			
			for (i = 0; i <= 7; i++){
				
				if((idades[i] % 2) == 0){
					soma = soma + idades[i];
				}
				
			}
			
			printf("\n a soma dos pares é: %i", soma);
			
		
		}else if(o == 8){
			
			for (i = 0; i <= 7; i++){
				
				if(idades[i] < 18){
					printf("\nidade menor que 18: %i", idades[i]);
				}
				
			}
		
		}else if(o == 9){
		    int soma = 0;
			
			for (i = 0; i <= 7; i++){
				
				if(idades[i] >= 18){
					soma = soma + 1;
				}
				
			}
			
			printf("\n a quantidade de maiores de idade é: %i", soma);
		
		}else if(o == 10){
		    int soma = 0;
			
			for (i = 0; i <= 7; i++){
				
				if(idades[i] >= 18){
					soma = soma + idades[i];
				}
				
			}
			
			printf("\n a soma de maiores de idade é: %i", soma);
		
		}
			
		
		
		
	}
	
	return 0;
}
