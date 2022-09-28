#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Q5 – INFORMAÇÕES SALARIAIS – Crie uma aplicação que forneça várias informações salariais referente 
ao salário de um determinado professor que ganha R$ 25,00 por hora/aula. A aplicação criada deverá:  
a) Solicitar qual a quantidade de aulas semanais que o professor leciona;  
b) Deverá apresentar o salário bruto mensal, considerando que o mês é composto por 4 semanas e 
que o professor tem um acréscimo de 10% (referente ao vale alimentação, vale transporte e plano de 
saúde).  
c) Deverá apresentar os valores descontados em folha de pagamento, que são 5% de IR e 7% de INSS. 
d) Deverá apresentar o valor do salário líquido do professor (salário bruto menos os descontos). */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	float aulas = 0.0; //aulas 
	float bsmensal = 0.0; //salario bruto mensal
	float sphora = 25.0; //salario por hora/aula
	float slmensal = 0.0; //salario liquido mensal
	float ir = 0.05;
	float inss = 0.07;
	float acrescimo = 0.1;
	
	printf("...:::INFORMAÇÕES SALARIAIS:::...\n\n");
	printf("Informa a quantidade de aulas semanais: ");
	scanf("%f", &aulas);
	
	acrescimo = acrescimo * aulas * sphora * 4;
	bsmensal = (aulas * sphora * 4) + acrescimo;
	
	printf("\nSeu salario bruto mensal é: R$ %f\n\n", bsmensal);
	printf("\nAcréscimo do seu salario é de: R$ %f\n\n", acrescimo);
	
	ir= bsmensal * ir;
	printf("\nO IR descontou do seu salario: R$ %f", ir);
	
	inss= bsmensal * inss;
	printf("\nO INSS descontou do seu salario: R$ %f", inss);
	printf("\n\n_______________________________________________________________________\n");
	
	slmensal= bsmensal - inss - ir;
	printf("\nSeu salario liquido é: R$ %f\n", slmensal);
	printf("_______________________________________________________________________\n\n\n");
	
	system("pause");
	
	return 0;
}
