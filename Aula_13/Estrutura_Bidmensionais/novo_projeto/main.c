#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opc = 0;
	int midade [3][3];
	int linha = 0;
	int coluna = 0;
	int soma = 0;
		
	while (opc != 9) {
		printf(":: MATRIX DE IDADE::    \n");
		printf("1. iniciar                \n");
		printf("2. carregar               \n");
		printf("3. imprimir               \n");
		printf("4. somar                  \n");
		printf("Digite a opção: ");
		scanf("%i", &opc);
		printf("_________________________________________________________________________________\n\n\n");
		
		if(opc == 1){
			for(linha =0; linha <= 2; linha ++) {
				//printf("i% \n", linha);
				
				for(coluna = 0; coluna <= 2; coluna++){
					//printf("coluna %i \n", coluna);
					midade[linha][coluna] = -1;
				}
			}
		} else if(opc == 2) {
			printf("\n================================================================\n");
			printf("digite as idades: \n");
			for(linha = 0; linha <= 2; linha ++){
				for(coluna = 0; coluna <= 2; coluna ++){
					scanf("%i", midade);
				}
			}
			printf("\n================================================================\n");
		} else if(opc == 3) {
			printf("\n================================================================\n\n");
			for(linha = 0; linha <= 2; linha ++) {
				for(coluna = 0; coluna <=2; coluna ++){
					printf("POSIÇÃO [%i][%i] = %i \n", linha, coluna, midade[linha][coluna] );
				
				}
			}
			printf("\n================================================================\n\n");
		} else if(opc == 4){
			printf("\n================================================================\n");
			for(linha = 0; linha <= 2; linha ++){
				for(coluna = 0; coluna <= 2; coluna ++){
				}
			}
		}
	}
	
	system("pause");
	return 0;
}
