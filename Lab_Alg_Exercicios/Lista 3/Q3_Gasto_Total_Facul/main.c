#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Q3 – CALCULAR O GASTO TOTAL DA FACULDADE – Crie uma aplicação consome que deverá calcular o 
valor mensal/anual total gasto com a faculdade, esse cálculo deverá ser composto por: a) Valor da 
mensalidade; b) Custo com transporte (van, ônibus, uber, taxi, carona, etc. cada aluno deverá adicionar 
o custo de transporte de acordo com seu uso); c) Custo de alimentação (lanches, refrigerantes, etc.). 
No final o sistema deverá exibir o custo total mensal e anual.*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float vmensal = 0.0;
	float passagem = 0.0;
	float dias = 0.0;
	float totalmensal = 0.0;
	float totaltrans = 0.0;
	float totalanual = 0.0;
	
	printf("...:::CALCULE SEU COSTO TOTAL DA FACULDADE:::...\n\n");
	
	printf("Informe a Mensalidade da Faculdade:");
	scanf("%f", &vmensal);
	printf("Quantos dias você vai para a Faculdade na semana:");
	scanf("%f", &dias);
	printf("Informe o valor da passagem:");
	scanf("%f", &passagem);
	
	printf("\n\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("___________________________________________________________________________\n\n\n");
	
	totaltrans = dias * 2/*---> ida e volta da facul*/ * 4/*---> semanas por mês*/ * passagem;
	
	totalmensal= totaltrans + vmensal;
	printf("Seu gasto mensal é: %f\n\n", totalmensal);
	
	totalanual = totalmensal * 12;
	printf("Seu gasto anual é: %f\n\n", totalanual);
	
	
	system("pause");
	return 0;
}
