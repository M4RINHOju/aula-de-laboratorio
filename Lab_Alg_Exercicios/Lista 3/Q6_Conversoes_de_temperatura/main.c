#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q6 – CONVERSÕES DE TEMPERATURA – Crie uma aplicação que dado um valor de temperatura em 
graus Celsius deverá apresentar o resultado convertido em graus Fahrenheit.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float grauc = 0.0;
	float grauf = 0.0;
	
	printf("...:::TRANFORMADOR DE GRAUS CELSIUS PARA FAHRENHEIT:::...\n\n");
	printf("Infome grau celsius:");
	scanf("%f", &grauc);
	printf("\n");
	grauf = grauc * 1.8 + 32;
	printf("Graus em Fahrenheit é: %f\n", grauf);
	printf("___________________________________________________________________\n\n\n\n");
	
	system("pause");
	return 0;
}
