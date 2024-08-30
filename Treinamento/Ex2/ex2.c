#include <stdio.h>

int main(){

    // qtd de casos de teste 
    int n;
    scanf("%d", &n);

    while(n>0){
        int vit_p1 = 0, vit_p2 = 0;

        //qtd partidas
        int k;
        scanf("%d", &k);
        
        // vetor que guarda os pontos das partidas
        int vetor[(k*2)];

        // loop que controla as partidas
        for(int i = 0; i<k*2; i += 2){
            scanf("%d", &vetor[i]);
            scanf("%d", &vetor[i+1]);

            if(vetor[i]>vetor[i+1]){
                vit_p1++;
                printf("%d-1 ", vetor[i]);
            }
            else if(vetor[i]==vetor[i+1]){
                printf("%d-empate ", vetor[i]);
            }
            else{           
                vit_p2++;
                printf("%d-2 ", vetor[i+1]);
            }     
        }
        
        if(vit_p1>vit_p2){
            printf("Resultado: 1\n");
        }
        if(vit_p1<vit_p2){
            printf("Resultado: 2\n");
        }
        else{
            printf("Resultado: Empate\n");
        }


        // printf("%d\n", n);
        // printf("VITORIAS P1: %d\n", vit_p1);
        // printf("VITORIAS P2: %d\n", vit_p2);
        
        // for(int j = 0; j<k*2; j++){
        // printf("%d ", vetor[j]);

        // }
        n--;
    }
    return 0;
}