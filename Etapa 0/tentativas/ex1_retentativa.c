#include <stdio.h>
#include <string.h>

int main(){
    int T, FlagAz[26], i;
    char String[1000];
    scanf("%d", &T); //Ler número de tentativas
    while(T>0){
        scanf("\n%[^\n]", String); //Ler a frase
        int C='A', c='a';
        for(i=0;i<26;i++)
            FlagAz[i]=0;
        for(i=0;i<26;i++){
            if(strchr(String, C) != NULL){ //Buscar cada letra maiúscula na frase
                FlagAz[i]=1; //Marcar que tal letra foi encontrada
            }
            if(strchr(String, c) != NULL){ //Buscar cada letra minúscula na frase
                FlagAz[i]=1; //Marcar que tal letra foi encontrada
            }
            C++, c++;
        }
        for(i=0;i<26;i++){ //Verificar se todas as letras estão presentes
            if(FlagAz[i]==0){
                printf("Falso\n");
                goto a;
            }
        }
        printf("Verdadeiro\n");
        a:
        T--;
    }
    return 0;
}
