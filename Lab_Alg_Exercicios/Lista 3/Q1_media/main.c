#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//lista de execicios laborat�rio de algoritimos;
//Q1 � CALCULAR A M�DIA NOTAS � Crie uma aplica��o console que dado o valor de 3 notas escolares de 0 a 10 dever� calcular a m�dia.

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	float n1 = 0.0;
	float n2 = 0.0;
	float media = 0.0;
	
	printf("...:::CALCULE SUA M�DIA:::...\n\n");
	
	printf("Digite sua primeira nota:");
	scanf("%f", &n1);
	printf("Digite sua segunda nota:");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	
	printf("Sua media �:  %f\n\n", media);
	printf("___________________________________________________\n\n");
	
	system("pause");
	return 0;
}
