#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opc = 0;
	int midade [3][3];
	
	
	while (opc != 9) {
		printf(":: MATRIX DE IDADE::    \n");
		printf("1. iniciar                \n");
		printf("2. carregar               \n");
		printf("3. imprimir               \n");
		printf("4. somar                  \n");
		printf("Digite a opção: ");
		scanf("%i", &opc);
		printf("_________________________________________________________________________________\n\n\n");
		
		if (opc == 1) {
			midade[0][0] = -1;
			midade[0][1] = -1;
			midade[0][2] = -1;
			
			midade[1][0] = -1;
			midade[1][1] = -1;
			midade[1][2] = -1;
			
			midade[2][0] = -1;
			midade[2][1] = -1;
			midade[2][2] = -1;
			
			
		} else if (opc == 2) {
			printf("Digite as idades:");
			scanf("%i", &midade[0][0]);
			scanf("%i", &midade[0][1]);
			scanf("%i", &midade[0][2]);
			
			scanf("%i", &midade[1][0]);
			scanf("%i", &midade[1][1]);
			scanf("%i", &midade[1][2]);
			
			scanf("%i", &midade[2][0]);
			scanf("%i", &midade[2][1]);
			scanf("%i", &midade[2][2]);
						
		} else if (opc == 3) {
			printf ("POSIÇÃO [0,0] = %i \n", midade[0][0]);
			printf ("POSIÇÃO [0,1] = %i \n", midade[0][1]);
			printf ("POSIÇÃO [0,2] = %i \n", midade[0][2]);
			
			printf ("POSIÇÃO [1,0] = %i \n", midade[1][0]);
			printf ("POSIÇÃO [1,1] = %i \n", midade[1][1]);
			printf ("POSIÇÃO [1,2] = %i \n", midade[1][2]);
			
			printf ("POSIÇÃO [2,0] = %i \n", midade[2][0]);
			printf ("POSIÇÃO [2,1] = %i \n", midade[2][1]);
			printf ("POSIÇÃO [2,2] = %i \n", midade[2][2]);
			
		} else if (opc == 4) {
			int soma = 0;
			soma = midade[0][0] + midade[0][1] + midade[0][2] +
			midade[1][0] + midade[1][1] + midade[1][2] + 
			midade[2][0] + midade[2][1] + midade[2][2];
			
			printf("A soma das idades é: %i \n\n", soma);
			
		}
	}
	
	system("pause");
	return 0;
}
