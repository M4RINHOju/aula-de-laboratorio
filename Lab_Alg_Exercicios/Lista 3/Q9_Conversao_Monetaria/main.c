#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q9 � COVERS�O MONET�RIA � Crie uma aplica��o que deve receber do usu�rio um determinado valor 
em REAIS, e tamb�m a cota��o do Dolar e Euro, baseado nestas informa��es, o programa dever� 
calcular e apresentar qual o valor que o usu�rio tem em Dol�res e Euros convertidos.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float reais = 0.0;
	float dolar = 0.0;
	float euro =0.0;
	
	printf("...:::COVERS�O MONET�RIA:::...\n\n");
	
	printf("Digite um valor em REAIS:");
	scanf("%f", &reais);
	printf("______________________________________________________________________________________\n\n");
	dolar = reais / 5.26;
	euro = reais / 5.10;
	
	printf("Voce t�m $ %f dol�res.\n\n", dolar);
	printf("Voc� t�m $ %f Euros.\n", euro);
	printf("\n______________________________________________________________________________________\n\n\n");
	
	system("pause");
	return 0;
}
