#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char tapete[22];
	char ent[1001];
	int casos;

	int achou, aux;

	scanf("%d", &casos);
	getchar();


	while(casos > 0) {
		strcpy(tapete, "aauauuaaauaauuaauaauu");
		scanf("%s", ent);
		achou = 0;


		if (strlen(ent) < 21) printf("NAO ENTENDI NADAAAAA, rePETee!!!\n");
		else {

			for(int i = 0; i <= strlen(ent) - 21; i++) {
				aux = 0;
				for (int j = 0; aux < 21; j++) {
					if (ent[i+aux] != tapete[j]) {
						if (ent[j+i] != 'a' && ent[j+i] != 'u')
							aux--;
						else break;
					}
					aux++;
					if (aux == 21) achou = 1;
				}
			}

			if (achou) printf ("taPETe!!! ENTENDIIII! EH PENTAAH ZELDAAA!\n");
			else printf("NAO ENTENDI NADAAAAA, rePETee!!!\n");
		}
		
		casos--;

	}
	return 0;
}
