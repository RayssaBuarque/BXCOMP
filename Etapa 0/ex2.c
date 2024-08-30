#include <stdio.h>
#include <string.h>

int main()
{
    
    int n ; // qtd casos
    scanf("%d", &n);

	while(n>0){
		char vetor[255];
    	scanf("\n%[^\n]", vetor);
    
    	int qtdChar = strlen(vetor);
   		printf((qtdChar % 3 == 1)? "Cosmo: Haha, gostei desse desejo\n": "Wanda: Que desejo mais interessante, Timmy\n");
	
		n--;
	}
    

    return 0;
}
