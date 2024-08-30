#include <stdio.h>
#include <string.h>

int main()
{
    
    int n, chave ; // qtd casos e chave
    char string[100];
    scanf("%d", &n);
    int i;

	while(n>0){
		scanf("%d", &chave);
		scanf ("%s", string);
		for (i =0; i < strlen(string); i++) {
			if (string[i] + chave >'Z'){
				string[i] = ((string[i]+chave));				
			}
			else {
			}
			
			
			
		}
		puts(string);
		
		n--;
	}
    

    return 0;
}
