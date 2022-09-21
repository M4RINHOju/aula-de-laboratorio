#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, media = 0.0;
	
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	if((n1 < 0) || (n1 > 10)) {
		printf("O valor para N1 deve ser entre 0 e 10. \n\n");
	} else {
		if ((n2 < 0) || (n2 > 0)) {
			printf("O valor para N2 deve ser entre 0 e 10. \n\n");
		} else {
			 media = (n1 + n2) / 2;
			 prinf("Media calculada: %.2f. \n", media);
			
			if(media<5) {
				printf("reprovado, exame! \n\n");
			} else {
				if(media > 7.5) {
					printf("Aprovado, SELECIONADO! \n\n");
				} else {
					printf("Aprovado! \n\n");
				}
			}
		}
	}
	
	system("pause");
	return 0;
}
