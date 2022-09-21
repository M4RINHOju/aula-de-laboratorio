int main()
{
	float prestacao, salario, max;
	
	printf("entre com o salario: ");
	scanf("%f", &salario);
	printf("entre com a prestacao: ");
	scanf("%f", &prestacao);
	
	max = salario * 0.3;
	
	if (prestacao>max)
	{
		printf("nao pode");
	}
	else
	{
		printf("pode");
	}
	
	
	/*printf("%f\n", salario);
	printf("%f\n", prestacao);
	printf("%f\n", max);*/
	
	return 0;
}
