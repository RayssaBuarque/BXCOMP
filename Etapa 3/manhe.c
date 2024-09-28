#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int casos;
	scanf("%d", &casos);
	char lista[691];
	char entrada[100];
	strcpy(lista,"Sao tres meses de ferias Que passam depressa Curtir e a prioridade Temos que aproveitar bem Entao vamos nessa Mas tem que rolar novidade (Como por exemplo) Ir ao espaco Lutar com uma mumia Ou escalar a Torre Eiffel inteira Descobrir uma coisa maluca demais Ou lavar o macaco na banheira Surfar um maremoto Criar minirobos Ou colocar o monstro no diva (Ta aqui o cerebro) Achar mais um dodo Pintar um continente Ou enlouquecer nossa irma (Phineas!) Antes que as aulas comecem de novo Temos muito que fazer (Vem Perry!) Fique ligado pois com Phineas e Ferb Tudo pode acontecer Fique ligado pois com Phineas e Ferb Tudo pode acontecer Manhe! Phineas e o Ferb estao fazendo a abertura da serie!");
	
	int n, num, vezes, cont, indice;
	indice = 0;


	while(casos > 0) {
		scanf("%s", entrada);
		
		if (!strcmp(entrada,"MANHE!!!")) { // Digitou MANHE!!!
			printf ("Vem Perry!\n");
			indice = 0;
		}	else {


			cont = 0;
			vezes = (int)entrada[0] - 48;
			if (entrada[1] == '0')
				vezes = 10;	
			vezes = vezes * 2;
			while (cont < vezes) {
				if (lista[indice] != ' ')
				    printf ("%c", lista[indice]);
				else {
					cont++;
					printf(" ");
				}
				indice++;
				if (indice == 691) break;
								
			}
			if (indice != 691)printf("\n");
			if (indice == 691){
			    
			    printf("PEEEEEEWN! \n");	
			    indice = 0;
			}
						
		}
		
		casos--;
	}
	return 0;
}
