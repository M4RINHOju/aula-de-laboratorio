#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mensalidade, transporte, alimentacao, percentualdedesconto, valordesconto, customensal = 0.0;
	
	//entrada
	scanf("%f", &mensalidade);
	scanf("%f", &transporte);
	scanf("%f", &alimentacao);
	scanf("%f", &percentualdedesconto);
	
	//processamento
	valordesconto = (mensalidade * percentualdedesconto) / 100;
	customensal - (mensalidade - valordesconto) + transporte + alimentacao +mensalidade;
	
	//saida
	printf("O custo mensal com a facul e: %f \n", customensal);
	
    
	return 0;
}
