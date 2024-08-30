#include <stdio.h>
#include <string.h>

int main()
{
    
    int n ; // qtd casos
    scanf("%d", &n);

	while(n>0){
		int letras = 26;
		char string[1000];
		scanf("\n%[^\n]",string);
		int i, j;
		
		
		for(i = 0; i<1000; i++){
			for(j = 65; i<=90; i++){
				if(strchr(string, (char) j )){
					letras--;
				}
				else if(strchr(string, (char) (j+32) )){
					letras--;
				}
				printf("%d     \n", letras);
			}
		}
		printf("%d     \n", letras);
		printf("%s", (letras==0)?"Falso\n":"Verdadeiro\n");
		n--;
	}
    

    return 0;
}
