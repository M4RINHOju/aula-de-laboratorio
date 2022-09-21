#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*calculadora basica de sistema de menus.
1. soma, 2. multiplicação; 3. subtração; 4. divisão 
*/


int main(int argc, char *argv[]) {
	
	int opcao = 0;
	float vx, vy, resultado =0.0;
	
	while  (opcao!= 9){
		printf("CALCULADORA SIMPLES\n");
		printf("1. soma\n");
		printf("2. subtracao\n");
		printf("9. sair\n");
		scanf("%i", &opcao);
		
		if (opcao ==1) {
			printf("digite o primeiro valor:");
			scanf("%f", &vx);
			printf("digite o segundo valor:");
			scanf("%f", &vy);
			resultado = vx + vy;
			printf("A soma dos valores e: %f", resultado);
		} else {
			if(opcao == 2) {
				printf("digite o primeiro valor:");
				scanf("%f", &vx);
				printf("digite o segundo valor:");
				scanf("%f", &vy);
				resultado = vx - vy;
				printf("a subtracao dos valores e: %f", resultado);
			}
		}
	}
	
	
	return 0;
}
