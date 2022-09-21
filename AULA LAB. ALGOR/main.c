#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float n1 = 0.0;
    float n2 = 0.0;
    float m = 0.0;
    
    printf("Digite a nota 1: ");
    Scanf("%f", &n1);
    printf("Digite a nota 2: ");
    Scanf("%f", &n2);
    
    m = (n1 = n2) / 2;
    
    printf("A media e: ");
    printf("%f", m);
    
	return 0;
	
}
