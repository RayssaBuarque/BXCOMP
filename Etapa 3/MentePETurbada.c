#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// Obs.: Verificar a consistência dos exemplos de saída deles (não entendi como o código deles gerou a saída)
//Procurar nas frases termos relacionados ao PET - o PET e seus projetos, e verificar a quantidade de emoções positvas e negativas - positiva maior ou menor que negativa ou igualadas
int main(){ // Os projetos são COMPETEC; BXCOMP; GRACE; FALA, CORUJA; OWLFICINAS; CORUJA INFORMA
    int Testes;
    char delimitadores[] = " "; // Caracteres para dividir a string em sub strings
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes
        int n, base=0, alegria=0, esque=0, achou=0; // Inicializar contadores de memória base, alegre e esquecida
        char evento[1000], auxiliar[1000];
        scanf("%d", &n); // Ler número de ocorrências
        for(int i=0;i<n;i++){
            scanf("\n%[^\n]", evento); // Ler cada ocorrência de vida
            achou=0;
            for(int i=0;i<strlen(evento);i++){ // Deixar toda a frase maiúscula
                if(evento[i]>='a' && evento[i]<='z')
                    evento[i]-=32;
            }
            char *token = strtok(evento, delimitadores); //Dividir a string cada vez que encontrar um espaço
            while (token!=NULL) { // Verificar se tem algum projeto do PET na frase
                memmove(auxiliar, token, sizeof(token)); // Receber conteúdo de token para ter o anterior do próximo
                if(strcmp(token, "CORUJA!")==0 && strcmp(auxiliar, "FALA,")){ // Verificar se encontrou "FALA,CORUJA!"
                    alegria++; // Incrementar memórias alegres
                    achou=1;
                }
                if(strcmp(token, "BXCOMP")==0){ // Verificar se encontrou "BXCOMP"
                    alegria++; // Incrementar memórias alegres
                    achou=1;
                }
                if(strcmp(token, "GRACE")==0){ // Verificar se encontrou "GRACE"
                    alegria++; // Incrementar memórias alegres
                    achou=1;
                }
                if(strcmp(token, "INFORMA")==0 && strcmp(auxiliar, "CORUJA")){ // Verificar se encontrou "CORUJAINFORMA"
                    alegria++; // Incrementar memórias alegres
                    achou=1;
                }
                if(strcmp(token, "OWLFICINAS")==0){ // Verificar se encontrou "OWLFICINAS"
                    alegria++; // Incrementar memórias alegres
                    achou=1;
                }
                if(strcmp(token, "COMPETEC")==0){ // Verificar se encontrou "COMPETEC"
                    alegria++; // Incrementar memórias alegres
                    achou=1;
                }
                if(strcmp(token, "PET")==0){ // Verificar se encontrou "PET" na frase
                    base++; // Incrementar memórias base
                    achou=1;
                }
                token = strtok(NULL, delimitadores);
            }
            if(achou==0)
                esque++; // Incrementar memórias no esquecimento se não achar nenhum projeto ou PET
        }
        if(base+alegria>esque){ // Verificar se há mais memórias bases e alegres do que esquecidas
                printf("O PET eh extraordinario e soh tem projetos admiraveis!!! Eu tenho %d memorias base, %d memorias de alegria e %d no esquecimento\n", base, alegria, esque);
            } else if(base+alegria<esque){ // Verificar se a quantidade é menor
                printf("Acho que falta um pouco de PET na minha vida... Eu tenho %d memorias base, %d memorias de alegria e %d no esquecimento\n", base, alegria, esque);
            } else { // Caso contrário, são quantidades iguais
                printf("Nao esta facil, mas pelo menos temos o PET! Eu tenho %d memorias base, %d memorias de alegria e %d no esquecimento\n", base, alegria, esque);
            }
    }
    return 0;
}
