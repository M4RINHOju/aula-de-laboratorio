#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q10 – MÉDIA FINAL LP – Crie uma aplicação que calcule a média final de um determinado aluno, a 
regra para cálculo da média final é data através da imagem abaixo: Atenção o programa deverá exibir 
a nota da NP1, NP2 e também MF.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float n1 = 0.0;
	float n2 = 0.0;
	float media = 0.0;
	
	printf("...:::CALCULE SUA MÉDIA:::...\n\n\n");
	printf("Informe sua nota 1: ");
	scanf("%f", &n1);
	printf("Informe sua nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	printf("Sua média é: %f", media);
	printf("\n_______________________________________________________________________\n\n\n");
	
	system("pause");
	return 0;
}
