/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int funcao(char letra){
	return (int) letra - 'a';
}

int main()
{
    
    int n ; // qtd casos
    scanf("%d", &n);

	while(n>0){
		int ocorrencias[26];
		int i, j,k,deuCerto = 0;
		
		int indice;
		
		char string[1000];
		scanf("\n%[^\n]",string);
		
		for(i = 0; i<strlen(string); i++){
  			string[i] = tolower(string[i]);
		}
		
		
		
		for(j = 0; j<26; j++){
			ocorrencias[j] = 0;
		}
		for(k = 0; k<strlen(string); k++){
			indice = funcao(string[indice]);
			ocorrencias[indice]++;
		}
		for(i = 0; i<26; i++){
			if(ocorrencias[indice] == 0){
				deuCerto =0;
				break;
			}
		}

		printf("%s", (deuCerto==0)?"Verdadeiro\n":"Falso\n");
		n--;
	}
    

    return 0;
}
