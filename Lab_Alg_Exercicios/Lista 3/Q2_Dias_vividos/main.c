#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q2 – CALCULAR A QUANTIDADE DE DIAS VIVIDOS – Crie uma aplicação console que solicite do usuário 
o ano de nascimento e o ano atual, baseado nestas duas informações exibida a quantidade de dias 
vividos até o momento, considere que cada ano contém 365 dias.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int idade = 0;
	int total = 0;
	
	printf("...:::CALCULE QUANTOS DIA JÁ VIVEU:::...\n\n\n");
	printf("________________________________________________________________________________________________\n\n\n");
	printf("Informe sua idade:");
	scanf("%i", &idade);
	
	total = idade*365;
	printf("Sua dias vividoos são: %i\n\n\n", total);
	
	
	system("pause");
	return 0;
}
