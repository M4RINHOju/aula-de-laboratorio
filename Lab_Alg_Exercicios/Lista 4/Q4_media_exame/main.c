#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q4 
Ler  os  valores  de  quatro  notas  escolares  de  um  aluno.  Calcular  a  m?dia  aritm?tica  e  apresentar  a 
mensagem ?aprovado? se a m?dia obtida for maior ou igual a 7, caso contr?rio, o prova deve solicitar 
a nota de exame do aluno e calcular a nova m?dia aritm?tica entre a nota de exame e a primeira m?dia 
aritm?tica. Se o valor da nova m?dia for maior ou igual a 5, apresentar a mensagem ?aprovado em 
exame?, caso contr?rio, apresentar a mensagem ?reprovado?. Informar junto de cada mensagem o 
valor da m?dia obtida. */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float n1 = 0.0;
	float n2 = 0.0;
	float n3 = 0.0;
	float n4 = 0.0;
	float media = 0.0;
	float exame = 0.0;
	
	printf("...:::CALCULE SUA M?DIA:::..\n\n\n");
	printf("Informe sua primeira nota :");
	scanf("%f", &n1);
	printf("Informe sua segunda nota :");
	scanf("%f", &n2);
	printf("Informe sua terceira nota :");
	scanf("%f", &n3);
	printf("Informe sua quarta nota: ");
	scanf("%f", &n4);
	
	media = (n1+n1+n3+n4)/4;
	printf("Sua media ?: %f\n\n", media);
	
	if(media >= 5) {
		printf("APROVADO!\n\n");
	} else{
		printf("informe nota do exame: ");
		scanf("%f", &exame);
		exame = (exame + media)/2;
		if(exame >= 5){
			printf("Nota final: %f\n\n", exame);
			printf("APROVADO EM EXAME\n\n");
		} else {
			printf("Nota final: %f\n\n", exame);
			printf("REPROVADO!\n\n");
		}
		
	}
	
	system("pause");
	return 0;
}
