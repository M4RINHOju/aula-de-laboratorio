#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//calcular a média de 10 alunos e apresentar se foi aprovado ou reporvado.

	
	float nota1, nota2, media =0.0;
	int vcontrole =0;
	
	for (vcontrole = 1; vcontrole <=10; vcontrole++){
		printf("Digite a nota 1: ");
		scanf("%f", &nota1);
		printf("Digite a nota 2: ");
		scanf("%f", &nota2);
	
		media = (nota1 + nota2) /2;
		
		if(media < 5.0) {
			printf("exame - media: %f\n\n", media);
		} else {
			printf("Aprovado - media: %f\n\n", media);
		}
	}

	

	system("pause");
	return 0;
}
