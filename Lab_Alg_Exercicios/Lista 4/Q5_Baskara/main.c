#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Ler  tr�s  valores  num�rico  (representados  por  a,  b,  c)  e  efetuar  o  c�lculo  da  equa��o  completa  de 
segundo grau utilizando a formula de baskara (considere todas as poss�veis condi��es para delta: delta 
<  0,  delta  >  0  e  delta  =  0).  Lembre-se  de  que  �  completa  a  equa��o  de  segundo  grau  que  possui 
simultaneamente as vari�veis A, B e C diferentes de zero.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	float a, b, c, x1, x2, delta;
	// Le os termos da equacao
	printf("Digite o valor do termo a: ");
	scanf("%f", &a);
	printf("Digite o valor do termo b: ");
	scanf("%f", &b);
	printf("Digite o valor do termo c: ");
	scanf("%f", &c);
	
	// Calcula o valor de x1
	delta = (b*b) - (- 4*a*c);
	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);
	
	// Imprime os resultados
	if(delta < 0) {
	printf("A equacao nao possui raizes reais.n");
	}
	if(delta == 0){
		printf("Ha apenas uma solu��o real x1: %f\n\n", x1);
	}else {
	printf("O valor de x1: %f\n\n", x1);
	printf("O valor de x2: %f\n\n", x2);
	}
	
 
	system("pause");
	return 0;
}
