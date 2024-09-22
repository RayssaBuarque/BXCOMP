#include <stdio.h>

int main (){
    int T, M, N, R, K, i, j, x, y;
    scanf("%d", &T); //Ler número de testes
    while(T>0){
        scanf("%d %d", &M, &N); //Ler dimensões da matriz
        int Matriz[M][N]; //preencher a matriz com 0
        for(i=0;i<M;i++){
            for(j=0;j<N;j++){
                Matriz[i][j]=0;
            }
        }
        scanf("%d %d", &R, &K); //Ler número de rôbos e de instruções
        char ordem[K]; //Armazenar as instruções
        for(i=0;i<R;i++){
            scanf("%d %d %s", &x, &y, ordem); //Ler o ponto de partida e as instruções
            for(j=0;j<K;j++){
                switch (ordem[j]){
                    case 'D':
                        y++;
                        break;
                    case 'E':
                        y--;
                        break;
                    case 'C':
                        x--;
                        break;
                    case 'B':
                        x++;
                        break; 
                    default:
                        break;
                }
            }
            if(Matriz[x][y]==0 && X>0 && X<N && Y>0 && Y<N){ //Verificar se o robô não saiu da matriz
                Matriz[x][y]=1;
            } else {
                printf("Hmm, parece que tivemos um pequeno contratempo robótico.\n");
                goto a;
            }
        }
        printf("Eureka! Eu sabia que minha programação era impecável.\n");
        a:
        T--;
    }
return 0;
}
