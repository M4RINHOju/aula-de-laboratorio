#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q9 – COVERSÃO MONETÁRIA – Crie uma aplicação que deve receber do usuário um determinado valor 
em REAIS, e também a cotação do Dolar e Euro, baseado nestas informações, o programa deverá 
calcular e apresentar qual o valor que o usuário tem em Doláres e Euros convertidos.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float reais = 0.0;
	float dolar = 0.0;
	float euro =0.0;
	
	printf("...:::COVERSÃO MONETÁRIA:::...\n\n");
	
	printf("Digite um valor em REAIS:");
	scanf("%f", &reais);
	printf("______________________________________________________________________________________\n\n");
	dolar = reais / 5.26;
	euro = reais / 5.10;
	
	printf("Voce têm $ %f doláres.\n\n", dolar);
	printf("Você têm $ %f Euros.\n", euro);
	printf("\n______________________________________________________________________________________\n\n\n");
	
	system("pause");
	return 0;
}
