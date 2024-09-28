#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Ver quem está mais próximo de Puro Osso(P) - Billy(B) ou Mandy(M) --> 2 finais perto de B ou de M; em uma matriz 7x10
int main(){
    int Testes;
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes

        int P[2], B[2], M[2]; //Índice 0 guarda linha e índice 1 guarda coluna
        char a;

        for(int i=0;i<7;i++){
            for(int j=0;j<10;j++){
                scanf(" %c", &a); //Buscar por P, B, M na matriz 7x10
                switch(a){
                    case 'P': //Se achar posição de P
                        P[0]=i;
                        P[1]=j;
                        break;
                    case 'B': //Se achar posição de B
                        B[0]=i;
                        B[1]=j;
                        break;
                    case 'M': //Se achar posição de M
                        M[0]=i;
                        M[1]=j;
                        break;
                }
            }
        }
        
        int PB[2], PM[2]; //Distância entre P & (B ^ M) linha(s)(índice 0) ou coluna(s)(índice 1)
        if(P[0]-B[0]<0){ //Guardar diferença entre linhas de P e B
            PB[0]=-(P[0]-B[0]);
        } else {PB[0]=P[0]-B[0];}
        if(P[1]-B[1]<0){ //Guardar diferença entre colunas de P e B
            PB[1]=-(P[1]-B[1]);
        } else {PB[1]=P[1]-B[1];}
        if(P[0]-M[0]<0){ //Guardar diferença entre linhas de P e M
            PM[0]=-(P[0]-M[0]);
        } else {PM[0]=P[0]-M[0];}
        if(P[1]-M[1]<0){ //Guardar diferença entre colunas de P e M
            PM[1]=-(P[1]-M[1]);
        } else {PM[1]=P[1]-M[1];}
        
        /*se x<y => x^2<y^2 => sqrt(x)<sqrt(y), calcular a distância por pitágoras*/
        if(PB[0]*PB[0]+PB[1]*PB[1]<=PM[0]*PM[0]+PM[1]*PM[1]){ //Verificar se P está mais próximo de B ou tão próximo de B quanto M 
            printf("Ah, oi Puro Osso\n");
        } else {printf("Nao me mate, pegue o idiota do Billy primeiro\n");}
    }
    return 0;
}
