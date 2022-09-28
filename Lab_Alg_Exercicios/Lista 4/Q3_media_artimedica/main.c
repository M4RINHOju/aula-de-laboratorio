#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Q3 
Ler  os  valores  de  quatro  notas  escolares  de  um  aluno.  Calcular  a  média  aritmética  e  apresentar  a 
seguinte mensagem “aprovado” se a média obtida for maior ou igual a 5, caso contrário, apresentar a 
mensagem “reprovado”. Informar junto de cada mensagem o valor da média obtida. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float n1 = 0.0;
	float n2 = 0.0;
	float n3 = 0.0;
	float n4 = 0.0;
	float media = 0.0;
	
	printf("...:::CALCULE SUA MÉDIA:::..\n\n\n");
	printf("Informe sua primeira nota:");
	scanf("%f", &n1);
	printf("Informe sua segunda nota:");
	scanf("%f", &n2);
	printf("Informe sua terceira nota:");
	scanf("%f", &n3);
	printf("Informe sua quarta nota:");
	scanf("%f", &n4);
	
	media = (n1+n1+n3+n4)/4;
	printf("Sua media é: %f\n\n", media);
	
	if(media >= 5) {
		printf("APROVADO!\n\n");
	} else{
		printf("REPROVADO!\n\n");
	}
	
	system("pause");
	return 0;
}
