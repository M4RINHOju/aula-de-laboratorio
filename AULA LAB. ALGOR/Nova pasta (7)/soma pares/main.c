#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j = 0;
	int spar = 0;
	int copar = 0;
	
	
	for(j =12; j <=25; j++) {
		if((j % 2) == 0) {
			spar = spar + j;
			copar = copar + 1;
		}
		printf("J vale %i \n", j);
	}
	
	printf(" A Soma dos pares e: %i\n", spar);
	printf("A contage, de pares e: %i\n", copar);
	
	
	system("pause");
	return 0;
}
