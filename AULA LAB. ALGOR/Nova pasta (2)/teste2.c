int main()
{
	float normais, extras, liquido, bruto;
	
	scanf("%f", &normais);
	scanf("%f", &extras);
	
	bruto = normais * 10 + extras * 15;
	liquido = bruto * 0.9;
	
	printf("%f", bruto);
	printf("\n");
	printf("%f", liquido);
	
	return 0;
	
	
	
	
	
}
