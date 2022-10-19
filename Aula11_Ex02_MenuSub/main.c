#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opc = 0;

	while (opc != 9) {
		printf(" \n");
		printf(":: PASTELARIA ::.. \n");
		printf("1. Pasteis \n");
		printf("2. Refri \n");
		printf("3. Doces \n");
		printf("9. Sair \n");
		printf("Digite a opcao: ");
		scanf("%i", &opc);
		
		if (opc == 1) {
			int opc1 = 0;
			
			while (opc1 != 19) {
				printf("    \n");
				printf("    PASTEIS \n");
				printf("    11. Carne \n");
				printf("    12. Queijo \n");
				printf("    19. Sair \n");
				printf("    Digite a opcao: ");
				scanf("%i", &opc1);
				
				if (opc1 == 11) {
					
				} else if (opc1 == 12) {
					
				}
			}
			
		} else if (opc == 2) {
			
		} else if (opc == 3) {
						
		}		
	}	
	
	system("pause");
	return 0;
}

