#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Buscar por "CF", "CD", "B", "BD" e palíndromo de 3 ou mais letras, (3 finais - CF+CD+B<x, CF+CD+B>=x sem palíndromo, CF+CD+B>=x com palíndromo)
int main(){
    int Testes;
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes

        char String[101]; //Coisas que Rico tem na barriga
        int TAM, i; //Tamanho do caminho a ser cavado
        scanf("%d", &TAM);
        scanf("%s", String);

        for(i=1;i<(strlen(String)+1);i++){ //Parar a busca se conseguir cavar o suficiente
            if(String[i-1]=='C' && String[i]=='F'){ //Colher fraca --> avançar 3m
                TAM=TAM-3;
            }
            if(String[i-1]=='C' && String[i]=='D'){ //Colher destruidora --> avançar 5m
                TAM=TAM-5;
            }
            if(String[i-1]=='B' && String[i]!='D'){ //BD = banco de dados --> avançar 0, B_(sendo "_" qualquer coisa != D) --> avançar 10m
                TAM-=10;
            }
            if(TAM<=0) break; //Parar se conseguirem cavar o suficiente
        }

        int A=0; //Achou palíndromo / Têm paraquedas? Sim --> 1, Não --> 0

        for(i=1;i<strlen(String);i++){ //Buscar palíndromo - número ímpar de letras --> anterior == próximo, múmero par de letras --> atual == próximo && anterior == próximo do próximo
        //Portanto começar em 1 e terminar em 98, vai até 100 para evitar acessar elemento fora da string
            if(String[i-1]==String[i+1]){ //Palíndromo de pelo menos 3 letras
                A=1;
                break; //Parar se encontrar um palíndromo
            }
            if(String[i]==String[i+1] && String[i-1]==String[i+2]){ //Palíndromo de pelo menos 4 letras
                A=1;
                break; //Parar se encontrar um palíndromo
            }
        }

        if(TAM>0){ //Não conseguiram cavar tudo
            printf("Kowalski: Capitao, segundo meus calculos faltaram %d metros para escaparmos\n", TAM); 
        } else {
            if(A==1){ //Cavaram tudo e tinham paraquedas
                printf("Capitao: Quem disse que pinguim nao voa? Haha! Sorriam e acenem rapazes\n");
            } else { //Cavaram tudo e não tinham paraquedas
                printf("Capitao: Sujou! Rapido, escondam nossa rota de fuga!... Voce nao viu nada...\n");
            }
        }
    }
    return 0;
}
