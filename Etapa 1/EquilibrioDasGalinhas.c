#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Somar conteúdo à esquerda e à direita e comparar a diferença (3 finais - voou(x<1,3y e y<1,3x), perto do limiar(x>1,3y ou y>1,3x), caiu(x>1,5y ou y>1,5x))
int main(){
    int Testes;
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes

        int M[8][9]; //Matriz para a distribuição de galinhas
        int dir=0, esq=0; //Guarda massa do lado esquerdo e do lado direito
        for(int j=0;j<8;j++){
            for(int i=0;i<9;i++){
                scanf("%d", &M[j][i]);
                if(i<4){ //Somar massa do lado esquerdo em pacotes de milho
                    esq+=M[j][i];
                }
                if(i>4){ //Somar massa do lado direito em pacotes de milho
                    dir+=M[j][i];
                }
            }   
        }

        esq*=0.75, dir*=0.75; //Converter massa para kg e não precisa de typecast, pois pede a massa truncada
        /* 1 pacote de milho = 3,5 ovos = 1/20 fardo de feno = 15/20 kg = 3/4 kg = 0,75 kg
        20 vezes a proporção
        20 pacotes de milho = 70 ovos = 1 fardo de feno = 15 kg */

        if(1.5*esq<dir || 1.5*dir<esq){ //Verificar se excedeu margem segura
            printf("%d %d\npo PO POOOOOOO!!!! Essa lata veia vai cairrr!!!!!\n", esq, dir);
        } else {
            if(1.3*esq<dir || 1.3*dir<esq){ //Verificar se tende ao limiar
                printf("%d %d\nOh ceus, segura na mao da amiga e vai.\n", esq, dir);
            } else {
                printf("%d %d\nVOOOOAAAA DISGRACAAAAA!\n", esq, dir); //Dentro da margem segura
            }
        }
    }
    return 0;
}
