#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*Q8 – PARCELA EM ATRASO – Crie uma aplicação que é responsável por apresentar o valor total de uma 
prestação que foi paga em atraso, a formula para realizar o cálculo da prestação é:  PRESTAÇÃO = 
VALOR = (VALOR * (TAXA / 100) * TEMPO). */


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float valor = 0.0;
	float taxa = 0.0;
	float tempo = 0.0;
	float total =0.0;
	
	printf("...:::PARCELA:::...\n\n\n\n");
	printf("Informe o valor da parcela:  ");
	scanf("%f", &valor);
	printf("Informe a taxa de atraso:  ");
	scanf("%f", &taxa);
	printf("Informe o tempo os dias de a traso de pagamento:  ");
	scanf("%f", &tempo);
	printf("\n\n\n____________________________________________________________________________________\n\n");
	
	taxa = (valor * (taxa / 100) * tempo);
	total = valor + taxa;
	
	printf("O valor da taxa de atraso é: R$ %f", taxa);
	printf("\nO total a pagar com o juros de atraso é: R$ %f", total);
	printf("\n____________________________________________________________________________________\n\n");
	
	system("pause");
	return 0;
}
