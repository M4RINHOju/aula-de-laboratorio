#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q2 � CALCULAR A QUANTIDADE DE DIAS VIVIDOS � Crie uma aplica��o console que solicite do usu�rio 
o ano de nascimento e o ano atual, baseado nestas duas informa��es exibida a quantidade de dias 
vividos at� o momento, considere que cada ano cont�m 365 dias.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int idade = 0;
	int total = 0;
	
	printf("...:::CALCULE QUANTOS DIA J� VIVEU:::...\n\n\n");
	printf("________________________________________________________________________________________________\n\n\n");
	printf("Informe sua idade:");
	scanf("%i", &idade);
	
	total = idade*365;
	printf("Sua dias vividoos s�o: %i\n\n\n", total);
	
	
	system("pause");
	return 0;
}
