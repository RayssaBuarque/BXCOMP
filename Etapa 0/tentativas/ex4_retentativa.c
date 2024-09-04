#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
/*Ao invés de guardar os arranjos em vetores diferentes, guardei tudo em um só para apenas ordenar o vetor
No fim, quando passa as entradas não faz diferença onde cada uma está sendo armazenada*/
int main(){
    int T, i, j, k, aux, Vetor[16]; 
    scanf("%d", &T);
    while (T>0){
        for(i=0;i<16;i++){
            scanf("%d", &Vetor[i]);
        }
        qsort(Vetor, 16, sizeof(int), cmpfunc);
        for(i=0;i<16;i++){
            printf("%d ", Vetor[i]);
        }
        printf("\n");
        T--;
    }
    return 0;
}
