/*29- Escreva um algoritmo em que leia um número e imprima a raiz quadrada do número caso
ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.*/
#include <math.h>

int main()
{
	float x;
	
	printf("escreva um numero: ");
	scanf("%f", &x);
	
	if (x>=0)
	{
		
		x = sqrt(x);
		printf("a raiz quadrada e: %f ", x );
	
	}
	else 
	{
		x = pow(x,2);
		printf("o quadrado de: %f", x);
	}
	
	return 0;
}
