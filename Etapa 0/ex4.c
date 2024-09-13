#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) { //Não lembro para que serve isso mas é requerido para usar o qsort
   return ( *(int*)a - *(int*)b );
}
/*Ao invés de guardar os arranjos em vetores diferentes, guardei tudo em um só para apenas ordenar o vetor
No fim, quando as entradas são passadas "não faz diferença onde cada uma está sendo armazenada"(na minha opinião)*/
int main(){
    int T, i, j, k, aux, Vetor[16]; 
    scanf("%d", &T); //Ler número de tentativas
    while (T>0){
        for(i=0;i<16;i++){
            scanf("%d", &Vetor[i]); //Ler todos os elementos
        }
        qsort(Vetor, 16, sizeof(int), cmpfunc); //Ordenar o Vetor
        for(i=0;i<16;i++){
            printf("%d ", Vetor[i]);
        }
        printf("\n");
        T--;
    }
    return 0;
}
