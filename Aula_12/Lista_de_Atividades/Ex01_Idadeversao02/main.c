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
	int i = 0;
	
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
			for (i = 0; i <= 4; i++) {
				vidades[i] = 0;
			}
			
		} else if (opc == 2) {
			for ( i = 0; i <= 0; i++) {
				scanf("%i", &vidades[i]);
			}
			
		} else if (opc == 3) {
			somaridades = 0;
			for (i = 0; i <= 4; i++){
				somaridades = somaridades + vidades[i];
			}
			printf("\n A Soma das idades é: %i\n\n_______________________________________________________________________\n\n", somaridades);
			
		} else if (opc == 4) {
			contaridades = 0;
			for (i = 0; i <= 4; i++) {
				if(vidades[0] >= 21) {
				contaridades = contaridades + 1;
				}
			}
			printf("\n O numero de idades >= 21 são: %i \n\n_______________________________________________________________________\n\n", contaridades);
			
		} else if (opc == 5) {
			for (i = 0; i <= 4; i++) {
				printf("Posição %i: %i \n", i, vidades[0]);
			}
		}
	}
	system("pause");
	return 0;
}
