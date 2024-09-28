#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Identificar se um número é palíndromo, 2 finais - é um palíndromo, não é um palíndromo
int main(){
    int Testes;
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes
        
        char num[1000];
        scanf("%s", num); //Tratar o número como uma string

        int i=0, j=strlen(num)-1;
        while(i<j){ //Começar comparando 1º elemento com o último, 2º com penúltimo, ..., até que os índices se encontrem
            if(num[i]!=num[j]){ //Verificar se a posição i do número equivale com sua posição j, se sim ainda é um palíndromo, se não, termina o caso
                printf("Bem vindos, agentes\n");
                goto A;
            }
            i++; j--;
        }
        printf("EH CLONE, CUIDADO\n");
        A:
        
    }
    return 0;
}
