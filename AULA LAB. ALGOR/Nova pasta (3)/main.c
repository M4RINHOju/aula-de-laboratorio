#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declaração de variaveis
	float n1 = 0.0;
	float n2 = 0.0;
	float m = 0.0;
	
	//Entrada
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);

    //Processamento	
	m = (n1 + n2) / 2;
	
	//Saida
	printf("A media e: ");
	printf("%f", m);
	
	system("pause");
	
	
	return 0;
}
