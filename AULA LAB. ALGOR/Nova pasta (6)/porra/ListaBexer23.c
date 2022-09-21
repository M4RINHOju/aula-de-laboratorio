/*23- Em um determinado mercado o preço normal de venda de um produto é dado pelo valor
de custo acrescido de 40%. Cada produto possui um tipo (1 - Perecível, 2 - Não
perecível). Além disso, o mercado trabalha com promoções, conforme descriminado abaixo:
PRODUTOS PERECÍVEIS
Promoção Critério Desconto
Promoção 1 Valor de venda maior que R$20,00 20%
Promoção 2 Valor de venda maior que R$10,00 e menor ou igual a R$20,00 10%
Promoção 3 Outros valores de venda 15%
PRODUTOS NÃO PERECÍVEIS
Promoção Critério Desconto
Promoção 4 Valor de venda maior que R$50,00 5 %
Escreva um programa que leia o valor de custo de um produto e seu tipo. Através das
informações acima, calcule e imprima o valor total do produto e a promoção que ele se
enquadrou. Caso o produto não se enquadre nas promoções acima, imprima “Promoção 0”.*/


int main()
{
	float custo, venda;
	int promocao;
	char tipo;
	
	promocao = 0; 
	
	printf("Entre com o valor de custo: ");
	scanf("%f", &custo);
	getchar();
	
	printf("(P) - Perecivel\n");
	printf("(N) - Não perecivel\n");
	printf("Entre como o tipo do produto:");
	scanf("%C", &tipo);
	
	
	venda = custo * 1.4;
	
	switch(tipo)
	{
		case 'P':
			if(venda>20)
			{
				promocao = 1;
				venda = venda * 0.8;
			}
			else
			{
				if(venda>10)
				{
					promocao = 2;
					venda = venda * 0.9;
				}
				else
				{
					promocao = 3;
					venda = venda * 0.85;
				}
				break;
			}
			default:
				if(venda>50)
				{
					promocao = 4;
					venda = venda * 0.95;
				}
				break;
	}
		printf("Valor_de_custo: %0.2f", custo);
		printf("\nPromocao: %0.2f", venda);
			
	
	
	return 0;
	
}
