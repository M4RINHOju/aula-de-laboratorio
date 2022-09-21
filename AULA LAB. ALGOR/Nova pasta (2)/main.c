#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1 = 0.0;
	float nota2 = 0.0;
	float m = 0.0;
	
	//entrada
	printf("Digite a nota1: ");
	scanf("%f", &nota1);
	printf("Digite a nota2: ");
	scanf("%f", &nota2);
	
	//processamento
	
	m = (nota1 + nota2) / 2;
	printf("A media e: ");
	printf("%f", m);
	
	return 0;
}
