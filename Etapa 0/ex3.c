#include <stdio.h>
#include <stdlib.h>

typedef struct{ // Estrutura para guardar informações de cada robô
    int linha; // Guardar o índice da posição na linha
    int coluna; // Guardar o índice da posição na coluna
    char ordem[15]; // Guardar as ordens
} Robo;

void zerar(int** Matriz, int M, int N){ // Função para zerar a matriz
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            Matriz[i][j]=0;  
}

int contador(int** Matriz, int M, int N){ // Função para contar número de robôs na matriz após cada rodada de movimentação
    int cont=0;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            if(Matriz[i][j]==1)
                cont++; 
    return cont;
}

int main (){
    int T, M, N, R, K, i, j, **Matriz;
    scanf("%d", &T); // Ler número de testes
    while(T>0){
        scanf("%d %d", &M, &N); // Ler as dimensões da matriz
        Matriz=(int**)malloc(M*sizeof(int*)); //Criar a matriz dinamicamente para passar como parâmetro de função
        for(i=0;i<N;i++) 
            Matriz[i]=(int*)malloc(N*sizeof(int));

        scanf("%d %d", &R, &K); // Ler quantidade de robôs e de ordens
        Robo Robos[R]; // Criar um vetor de R robôs
        for(i=0;i<R;i++){ 
            scanf("%d %d %s", &Robos[i].linha, &Robos[i].coluna, Robos[i].ordem); // Preencher os atributos de cada robô
        }
        for(j=0;j<K;j++){
            zerar(Matriz, M, N); // Inicializar a matriz zerada e resetar para mostrar a posição de cada robô a cada rodada de movimentação
            for(i=0;i<R;i++){ // Executar uma ordem de cada robô
                switch (Robos[i].ordem[j]){
                case 'D': // Deslocar uma coluna a direita
                    if(Robos[i].coluna+1<N){ // Verificar se sairá da matriz (O gabarito não verifica isso, então preciso ver o que deveria realmente acontecer com o robô quando sair - pode se movimentar para fora ou bateu?)
                        Robos[i].coluna++;
                        Matriz[Robos[i].linha][Robos[i].coluna]=1; // Atualizar a movimentação
                    } else {
                        printf("Hmm, parece que tivemos um pequeno contratempo robótico.\n");
                        goto a; // Terminar o caso de teste
                    }
                    break;
                case 'E': // Deslocar uma coluna a esquerda
                    if(Robos[i].coluna-1>=0){
                        Robos[i].coluna--;
                        Matriz[Robos[i].linha][Robos[i].coluna]=1;
                    } else {
                        printf("Hmm, parece que tivemos um pequeno contratempo robótico.\n");
                        goto a;
                    }
                    break;
                case 'C': // Deslocar uma linha a cima
                    if(Robos[i].linha-1>=0){
                        Robos[i].linha--;
                        Matriz[Robos[i].linha][Robos[i].coluna]=1;
                    } else {
                        printf("Hmm, parece que tivemos um pequeno contratempo robótico.\n");
                        goto a;
                    }
                    break;
                case 'B': // Deslocar uma linha a baixo
                    if(Robos[i].linha+1<M){
                        Robos[i].linha++;
                        Matriz[Robos[i].linha][Robos[i].coluna]=1;
                    } else {
                        printf("Hmm, parece que tivemos um pequeno contratempo robótico.\n");
                        goto a;
                    }
                    break; 
                default:
                    break;
                }
                
            }
            if(contador(Matriz, M, N)<R){ // Verificar quantos robôs estão na matriz no fim da rodada, se tiver menos do que a quantidade inicial então houve colisão
                printf("Hmm, parece que tivemos um pequeno contratempo robótico.\n");
                goto a;
            }
        }
        printf("Eureka! Eu sabia que minha programação era impecável.\n");
        a:
        for(i=0;i<M;i++) //Liberar memória alocada
            if(Matriz[i]!=NULL) free(Matriz[i]);
        if(Matriz!=NULL) free(Matriz);
        T--;
    }
return 0;
}
