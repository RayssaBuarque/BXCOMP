#include <stdio.h>
#include <string.h>

int main()
{
   
    int n; // qtd casos
    int chaveinicial;
    int chave;
    char string[100];
    scanf("%d", &n);

    int i,j,k; // variáveis de iteração

	while(n>0){
		scanf("%d", &chaveinicial);
		
		chaveinicial = chaveinicial % 26;
		scanf ("%s", string);
		
		for(i = 0; i<strlen(string); i++){
			chave = chaveinicial;	
			
			while (string [i] < 'Z' && chave > 0) {
			    string[i]++;
			    chave--;
			}
			
			if (string[i] == 'Z' && chave > 0) {
			    string[i] = 'A';
				chave--;    
			}
			
			while (chave > 0) {
		    	string[i]++;
			    chave--;
			}
		
		}
		puts(string);
		
		n--;
	}  

    return 0;
}
