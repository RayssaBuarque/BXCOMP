#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Converter segundos em horas:minutos:segundos e verificar se minutos ou segundos é um número primo
int primo(int x){ //Função para verificar se o número é primo utilizando recursão
    if(x==2) return 1; //Verificar se o número é igual a 2 único primo par
    if(x%2==0 || x<2) return 0; //Verificar se o número é par ou se é menor que 2 (0 ou 1, não são primos)
    for(int i=3;i<x/2;i++){ //Passar por todos os números entre 3 e x/2;
        if(primo(i)==1) if(x%i==0) return 0; //Verificar se x está sendo dividido por um número primo e se não possuir resto x não é primo
    }
    return 1; //Passou por todos os números e sua divisão de x por eles deixou resto
}

int main(){
    int Testes;
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes

        int Seg, flagPrimo; //Receber tempo em segundos + marcador de número primo (1 --> é um número primo, 0 --> não é um número primo)
        scanf("%d", &Seg);

        flagPrimo=primo(Seg%3600/60); //Verificar se o número em minutos é primo
        if(flagPrimo==0) flagPrimo=primo(Seg%3600%60); //Verificar se o número em segundos é primo e se minutos for um número primo evita uma nova busca

        if(flagPrimo==1){
            printf("%02d:%02d:%02d CORTA OS FIO FLASH AGORA BOMB HAS BEEN DEFUSED\n", Seg/3600, Seg%3600/60, Seg%3600%60); //Se tiver algum número primo no minuto ou segundo
        } else printf("%02d:%02d:%02d Segura a mao flash paciencia eh uma virtude nao seja precoce\n", Seg/3600, Seg%3600/60, Seg%3600%60); //Se não tiver número primo no minuto ou segundo

    }
    return 0;
}
