#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q2 
Ler  um  valor  numérico  inteiro  positivo  ou  negativo  e  apresentar  o  valor  lido  como  sendo  um  valor 
positivo, ou seja, se o valor lido for menor ou igual a zero, ele deve ser multiplicado por -1. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int numero = 0;
	int resultado = 0;
	
	printf("Informe um numero: ");
	scanf("%i", &numero);
	
	if (numero <= 0) {
		resultado = numero * -1;
	}
	if (numero > 0) {
		resultado = numero;
	}
	printf("seu numero inteiro positivo é: %i\n", resultado);
	printf("\n____________________________________________________________________________\n\n\n");
	

	system("pause");
	return 0;
}
