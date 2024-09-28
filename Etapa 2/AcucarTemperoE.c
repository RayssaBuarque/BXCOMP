#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Ler ingredientes e apresentar resultado 7 finais - nenhum, açúcar, tempero, tudo que há de bom, x, 2 ingredientes, 4 ingredientes
int main(){
    int Testes;
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes

        char frase[500];
        scanf("\n%[^\n]", frase); //Ler os 4 ingredientes usados
        int A=0, T=0, B=0, x=0; //A=açúcar, T=tempero, B=tudoquehadebom, x=elemento x

        char *token = strtok(frase, " "); //Dividir a string cada vez que encontrar um espaço
        while (token!=NULL) { //Marcar 1 se tal ingrediente estiver presente
            if(strcmp(token, "acucar")==0){
                A=1;
            }
            if(strcmp(token, "tempero")==0){
                T=1;
            }
            if(strcmp(token, "tudoquehadebom")==0){
                B=1;
            }
            if(strcmp(token, "x")==0){
                x=1;
            }
            token = strtok(NULL, " ");
        }
        if(x==1 && B==1 && T==1 && A==1){ //Todos os ingredientes estão presentes
            printf("E assim nasceram as meninas Superpoderosas, usando seus ultra-super poderes - Florzinha, Lindinha e Docinho, tem dedicado suas vidas Combatendo o crime, e as forcas do mal!\n");
        } else {
            if(x==0 && B==0 && T==0 && A==0){ //Nenhum ingrediente está presente
                printf("?\n");
            } else {
                if(x==1 && B==0 && T==0 && A==0){ //Somente elemento X está presente
                    printf("Anoitece, amanhece e o efeito permanece...\n");
                } else {
                    if(x==0 && B==1 && T==0 && A==0){ //Somente tudo que há de bom está presente
                        printf("Nada!\n");
                    } else {
                        if(x==0 && B==0 && T==1 && A==0){ //Somente tempero está presente
                            printf("Nao falta!\n");
                        } else {
                            if(x==0 && B==0 && T==0 && A==1){ //Somente açúcar está presente
                                printf("Uniao faz\n");
                            } else { //Tem pelo menos dois ingredientes presentes, mas não tem todos os quatros
                                printf("E assim nasceram as meninas Superpoderosas\n");
                            }
                        }
                    }
                }
            }
        }
    
    }
    return 0;
}
