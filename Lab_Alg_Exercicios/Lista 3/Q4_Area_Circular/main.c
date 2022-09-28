#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q4 – AREA CIRCUNFERÊNCIA – Crie uma aplicação de será responsável por calcular a área de uma 
circunferência (pesquise caso tenha dúvidas de como calcular a área de uma circunferência).*/

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	float raio, pi=3.14, area;
	
	// Entrada de dados
	printf("RAIO = "); 
	scanf("%f", &raio);
 
	// Cálculo da área da circunferência
	area = pi * raio * raio;
 
	// Apresentação do resultado
	printf("AREA = %.2f m^2 \n", area);
 
	system("pause");
	return 0;
}
