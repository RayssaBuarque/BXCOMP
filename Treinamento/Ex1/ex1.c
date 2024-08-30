#include <stdio.h>

// ************************
//   VERIFICANDO VITÓRIA
// ************************
int conclusao(int i_nave, int i_inimigoTras, int balas){
    // se acabarem as balas sem matar os inimigos da frente
    if(balas < 0){
        return 0;
    }
    
    // se distancia da nave p/ inimigo de tras for menor q a da nave p/ fim
    //           e também >existir< um inimigo de tras
    if((i_inimigoTras != -1) && ((i_nave - i_inimigoTras) < (18 - i_nave))){
        return 0;
    }

    // caso tenha passado por todos os casos
    return 1;
}

int main(){
    int n; // quantidade de casos de teste
    scanf("%d", &n);

    while(n > 0){       
        char vetor[20];
        scanf(" %[^\n]", vetor);
        
        int i_nave = -1, i_inimigoTras = -1, balas = 2;
        int i_inimigoFrente = 0;
        int vitoria = 1;
        
        // pulando de 2 em 2 (pra contornar espaços), analise o vetor
        for(int i = 0; i <= 18; i+=2){
            
            // se dig for uma nave
            if((i_nave == -1) && (((int)vetor[i] - 48) == 2)){
                i_nave = i;
            }

            // se dig for inimigo ANTES da nave
            else if((i_nave == -1) && (((int)vetor[i] - 48) == 1)){
                i_inimigoTras = i;
            }

            // se dig for inimigo DEPOIS da nave
            else if((i_nave != -1) && (((int)vetor[i] - 48) == 1)){
                balas--;
                i_inimigoTras++;
            }
        }
        
        printf("%s\n", (conclusao(i_nave, i_inimigoTras, balas))? "Explorador do espaço para base alpha, conseguimos passar pela chuva de meteoros!\n" : "Nu, vou tascar um beijo numa pedra do espaço se eu entrar ai, paia.\n");

        n--;
    }

    return 0;
}