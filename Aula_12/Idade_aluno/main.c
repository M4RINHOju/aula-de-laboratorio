#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opc = 0;
	int vidades[5];
	int somaridades = 0;
	int contaridades = 0;
	
	while (opc != 9) {
		printf("\n");
		printf("...::: MENU DE IDADES:::...   \n");
		printf(" 1. INICIAR                   \n");
		printf(" 2. Carregar idades           \n");
		printf(" 3. somar idades              \n");
		printf(" 4. contar >= 21              \n");
		printf(" 5. imprimir idades           \n");
		printf(" DIGITE A OPÇÃO:              \n");
		scanf("%i", &opc);
		
		if (opc == 1) {
			vidades[0] = 0;
			vidades[1] = 0;
			vidades[2] = 0;
			vidades[3] = 0;
			vidades[4] = 0;
			
		} else if (opc == 2) {
			scanf("%i", &vidades[0]);
			scanf("%i", &vidades[1]);
			scanf("%i", &vidades[2]);
			scanf("%i", &vidades[3]);
			scanf("%i", &vidades[4]);
			
		} else if (opc == 3) {
			somaridades = vidades[0] + vidades[1] + vidades[2] + vidades[3] + vidades[4];
			printf("\n A Soma das idades é: %i\n\n_______________________________________________________________________\n\n", somaridades);
			
		} else if (opc == 4) {
			contaridades = 0;
			if(vidades[0] >= 21) {
				contaridades = contaridades + 1;
			}
			if(vidades[1] >= 21) {
				contaridades = contaridades + 1;
			}
			if(vidades[2] >= 21) {
				contaridades = contaridades + 1;
			}
			if(vidades[3] >= 21) {
				contaridades = contaridades + 1;
			}
			if(vidades[4] >= 21) {
				contaridades = contaridades + 1;
				
			}
			printf("\n O numero de idades >= 21: %i \n\n_______________________________________________________________________\n\n", contaridades);
		} else if (opc == 5) {
			printf("Posição 0: %i \n", vidades[0]);
			printf("Posição 1: %i \n", vidades[1]);
			printf("Posição 2: %i \n", vidades[2]);
			printf("Posição 3: %i \n", vidades[3]);
			printf("Posição 4: %i \n", vidades[4]);
		}
	}
	system("pause");
	return 0;
}
