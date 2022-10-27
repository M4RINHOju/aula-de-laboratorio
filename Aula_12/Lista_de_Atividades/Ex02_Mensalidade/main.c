#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Q2 
MENSALIDADES  –  Crie  uma  aplicação  console  em  C  responsável  por  armazenar  10  valores  de 
mensalidades, a aplicação deverá conter um menu interativo com as opções abaixo relacionadas: 
 
      ..:: MENSALIDADES ::.. 
1. Zerar (deverá percorrer o vetor e atribuir valor zero a todos os endereços) 
 
2. Carregar (deverá solicitar do usuário 10 mensalidades, cada mensalidade informada deverá ser 
armazenada em uma posição do vetor). 
 
3. Imprimir (deverá percorrer o vetor e exibir todas as mensalidades, exiba também a posição em 
que a mensalidade está armazenada no vetor) 
 
4. Somar (Deverá percorrer o vetor, somar todas as mensalidades e exibir o resultado).  */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opc = 0;
	int i = 0;
	int valormensalidades[10];
	int 
	
	while (opc != 9) {
		printf("\n\n...:::MENSALIDADES:::...\n\n")
		printf("______________________________________________________________________\n");
		printf("...::: MENU DE MENSALIDADES:::...      \n");
		printf(" 1. Zerar                        \n");
		printf(" 2. Carregar                     \n");
		printf(" 3. imprimir mensalidades        \n");
		printf(" 4. Somar mensalidades           \n");
		printf(" DIGITE A OPÇÃO:                 \n");
		scanf("%i", &opc);
		
		if (opc = 1) {
			for (i = 0; i)
		
		} else if (opc = 2){
			
		} else if (opc = 3){
			
		} else if (opc = 4){
			
		} 
	}
	system("pause");
	return 0;
}
