#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Verificar quantas vezes apareceu "FAZ O URRO!" (4 finais - não pediu, agora não [1,6], sai pra lá [7,12], urro >=13)
int main(){
    int Testes;
    scanf("%d", &Testes); //Ler número de testes
    while((Testes--)>0){ //Colocar código para testar n vezes
        
        char String [200]; //String para armazenar conteúdo
        scanf("\n%[^\n]", String); //Ler conteúdo
        char FazOUrro[200], mask[200]=" ", X[200]=" ", Y[200]=" ", Z[200]=" "; //penultimo(X) + ultimo(Y) + atual(Z/token) == FazOUrro =? "FAZ O URRO!"
        int i=0; //Contador
        char *token = strtok(String, " "); //Dividir a string cada vez que encontrar um espaço
        while (token!=NULL) {
            memmove(FazOUrro, mask, sizeof(mask)); //"Limpar" a string a cada iteração, inicializa com " "
            memmove(X, Y, sizeof(Y)); //Receber conteúdo de Y
            memmove(Y, Z, sizeof(Z)); //Receber conteúdo de Z
            memmove(Z, token, sizeof(token)); //Receber conteúdo de token
            strcat(FazOUrro, X); 
            strcat(FazOUrro, " ");
            strcat(FazOUrro, Y);
            strcat(FazOUrro, " ");
            strcat(FazOUrro, Z); //FazOUrro = X+" "+Y+" "+Z
            if(strcmp(FazOUrro, " FAZ O URRO!")==0){ //Verificar se X+Y+Z=mask+"FAZ O URRO!"
                i++; //Contar cantas vezes encontrou FAZ O URRO!
            }
            token = strtok(NULL, " ");
        }
        switch (i){
            case 0:
                printf("falou comigo?\n");
            break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                printf("agora nao\n");
            break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                printf("sai daqui cueca suja\n");
            break;
            default:
                printf("AAAAAAAAAAAAAAAAAAAAAAARRRRRRRRRRRRRRRRRGGGGGGGGHHHHHHHHHH\n");
            break;
        }
      
    }
    return 0;
}
