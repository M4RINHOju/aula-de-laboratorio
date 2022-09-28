#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Q5 � INFORMA��ES SALARIAIS � Crie uma aplica��o que forne�a v�rias informa��es salariais referente 
ao sal�rio de um determinado professor que ganha R$ 25,00 por hora/aula. A aplica��o criada dever�:  
a) Solicitar qual a quantidade de aulas semanais que o professor leciona;  
b) Dever� apresentar o sal�rio bruto mensal, considerando que o m�s � composto por 4 semanas e 
que o professor tem um acr�scimo de 10% (referente ao vale alimenta��o, vale transporte e plano de 
sa�de).  
c) Dever� apresentar os valores descontados em folha de pagamento, que s�o 5% de IR e 7% de INSS. 
d) Dever� apresentar o valor do sal�rio l�quido do professor (sal�rio bruto menos os descontos). */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	float aulas = 0.0; //aulas 
	float bsmensal = 0.0; //salario bruto mensal
	float sphora = 25.0; //salario por hora/aula
	float slmensal = 0.0; //salario liquido mensal
	float ir = 0.05;
	float inss = 0.07;
	float acrescimo = 0.1;
	
	printf("...:::INFORMA��ES SALARIAIS:::...\n\n");
	printf("Informa a quantidade de aulas semanais: ");
	scanf("%f", &aulas);
	
	acrescimo = acrescimo * aulas * sphora * 4;
	bsmensal = (aulas * sphora * 4) + acrescimo;
	
	printf("\nSeu salario bruto mensal �: R$ %f\n\n", bsmensal);
	printf("\nAcr�scimo do seu salario � de: R$ %f\n\n", acrescimo);
	
	ir= bsmensal * ir;
	printf("\nO IR descontou do seu salario: R$ %f", ir);
	
	inss= bsmensal * inss;
	printf("\nO INSS descontou do seu salario: R$ %f", inss);
	printf("\n\n_______________________________________________________________________\n");
	
	slmensal= bsmensal - inss - ir;
	printf("\nSeu salario liquido �: R$ %f\n", slmensal);
	printf("_______________________________________________________________________\n\n\n");
	
	system("pause");
	
	return 0;
}
