#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q1-Leia dois valores num�ricos inteiros e apresente o resultado da diferen�a do maior valor pelo menor 
valor. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int n1 = 0;
	int n2 = 0;
	int resu = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%i", &n1);
	printf("informe o segundo valor: ");
	scanf("%i", &n2);
	
	if (n1 > n2) {
		resu = n1 - n2;
	}
	if (n1 < n2){
		resu = n2 - n1;
	}
	
	printf("\n\n______________________________________________________________\n\n");
	printf("A diferen�a entre os numeros �: %i\n\n\n", resu);
	
	system("pause");	
	return 0;
}
