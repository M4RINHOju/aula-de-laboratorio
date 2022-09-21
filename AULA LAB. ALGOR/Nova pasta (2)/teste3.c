int main()
{
	float seg, ter, qua, qui, sex, sab, dom, media; 
	printf("Entre com a temperatura medida da seg ");
	scanf("%f", &seg);
	printf("Entre com a temperatura medida da ter ");
	scanf("%f", &ter);
	printf("Entre com a temperatura medida da qua ");
	scanf("%f", &qua);
	printf("Entre com a temperatura medida da qui ");
	scanf("%f", &qui);
	printf("Entre com a temperatura medida da sex ");
	scanf("%f", &sex);
	printf("Entre com a temperatura medida da sab ");
	scanf("%f", &sab);
	printf("Entre com a temperatura medida da dom ");
	
	media = (seg+ter+qua+qui+sex+sab+dom)/7;
	
	printf("%f", media);
	
	
	
	
	return 0;
	
}
