#include <stdio.h>
#include <string.h>

int main(){
    int T, A, i;
    char String[100];
    scanf("%d", &T); //Ler número de testes
    while (T>0){
        scanf("%d",&A); //Ler o número de avanços
        scanf("%s", String); //Ler a palavra;
        for(i<0; i<strlen(String);i++){
            if (String[i]+A>'Z'){ //Verificar se passou do Z para voltar ao A
                String[i]=(String[i]+A)%'Z'+64; //Pegar resto da divisão por Z ou 90 e somar com A ou 65-1=64
            } else {
                String[i]=String[i]+A;
            }
        }
        printf("%s\n", String);
        T--;
    }
    return 0;
}
