#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade = 0;
	int diasvividos = 0;
	
	//entrada
	printf("..:: CALCULADORA DE DIAS VIVIDOS ::.. \n");
	printf("Informe sua idade atual: ");
	scanf("%i", &idade);
	
	//processamento
	diasvividos = (idade * 365);
	
	//saida
	printf("Voce viveu ate o momento %i dia(s). \n", diasvividos);
		
	system("pause");
	return 0;
}
