#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q4 � AREA CIRCUNFER�NCIA � Crie uma aplica��o de ser� respons�vel por calcular a �rea de uma 
circunfer�ncia (pesquise caso tenha d�vidas de como calcular a �rea de uma circunfer�ncia).*/

int main(int argc, char *argv[]) {
	
	// Declara��o das vari�veis
	float raio, pi=3.14, area;
	
	// Entrada de dados
	printf("RAIO = "); 
	scanf("%f", &raio);
 
	// C�lculo da �rea da circunfer�ncia
	area = pi * raio * raio;
 
	// Apresenta��o do resultado
	printf("AREA = %.2f m^2 \n", area);
 
	system("pause");
	return 0;
}
