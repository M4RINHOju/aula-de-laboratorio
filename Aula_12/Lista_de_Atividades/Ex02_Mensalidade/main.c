#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Q2 
MENSALIDADES  �  Crie  uma  aplica��o  console  em  C  respons�vel  por  armazenar  10  valores  de 
mensalidades, a aplica��o dever� conter um menu interativo com as op��es abaixo relacionadas: 
 
      ..:: MENSALIDADES ::.. 
1. Zerar (dever� percorrer o vetor e atribuir valor zero a todos os endere�os) 
 
2. Carregar (dever� solicitar do usu�rio 10 mensalidades, cada mensalidade informada dever� ser 
armazenada em uma posi��o do vetor). 
 
3. Imprimir (dever� percorrer o vetor e exibir todas as mensalidades, exiba tamb�m a posi��o em 
que a mensalidade est� armazenada no vetor) 
 
4. Somar (Dever� percorrer o vetor, somar todas as mensalidades e exibir o resultado).  */

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
		printf(" DIGITE A OP��O:                 \n");
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
