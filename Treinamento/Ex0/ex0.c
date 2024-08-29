#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(){

    // dados iniciais
    double raio_planeta = 0.0, circ_planeta = 0.0;
    int circ_terra = 40075;
    char mensagem[23];

    int n; // quantidade de casos de teste
    scanf("%d", &n);

    while(n>0){
        // coletando dados a cada iteração de planeta
        scanf("%lf", &raio_planeta);
        scanf(" %[^\n]", mensagem);
        circ_planeta = (int) (2.0*PI*raio_planeta);


        // **************************************        
        // PRIMEIRO CASO: PLANETA MAIOR Q A TERRA
        if((int) circ_planeta > circ_terra)
            printf("OLHA O TAMANHO DESSE PLANETA\n");

        else{
            // calculando quantidade de digitos da circunferencia do planeta
            int digitos_planeta = (int) log10((int) circ_planeta) + 1;
            int planeta_atacavel = 0; // false

            for(int i = (23 - digitos_planeta); i >= 0; i--){
                int base = 1; // base 10 do digito analisado
                int trecho = 0; // total do trecho analisado

                for(int j = digitos_planeta; j > 0; j--){
                    trecho += ((int) mensagem[(i + j - 1)] - 48) * base; // adicione o digito na posição ideal
                    base = base*10; // aumente a base da próxima iteração
                }

                // saia do loop se um dos trechos for igual à circunferencia do planeta
                if(trecho == (int)circ_planeta){
                    planeta_atacavel = 1;
                    break;
                }
            }
            // **************************************        
            // SEGUNDO CASO: PLANETA MENOR Q A TERRA E ATACÁVEL
            if(planeta_atacavel == 1)
                printf("Foguete nao tem marcha re, vamo bora fml\n");
            
            // **************************************        
            // TERCEIRO CASO: PLANETA NÃO ATACÁVEL
            else
                printf("Ferrou, estamos no planeta errado\n");
        }

        n--;
    }

    return 0;
}