#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Q7 – VOLUME LATA DE OLÉO – Crie uma aplicação deva apresentar o volume de uma lata de óleo 
baseado em sua altura e raio, a formula para o cálculo é VOLUME = 3.14149 * R2 * ALTURA. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float altura = 0.0;
	float raio = 0.0;
	float volume = 0.0;
	
	printf("...:::VOLUME LATA DE OLÉO:::...\n\n");
	printf("Informe a altura da lata:");
	scanf("%f", &altura);
	printf("Informe o raio da lata:");
	scanf("%f", &raio);
	printf("\n____________________________________________________________________\n");
	
	volume = 3.14149 * altura * raio;
	printf("O Volume da lata é: %f", volume);
	printf("\n\n\n");
		
	system("pause");
	return 0;
}
