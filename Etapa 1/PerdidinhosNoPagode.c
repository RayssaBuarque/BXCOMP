#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Identificar qual a colocação do número na sequência de Fibonacci(0-->0, 1-->1 2, 2-->3, 3-->5, ...)
int main() {
	int Testes;
	scanf("%d", &Testes); //Ler número de testes
  while((Testes--)>0) { //Colocar código para testar n vezes

		long num; 
		scanf("%ld", &num); //Ler o número de entrada

		if(num==0) printf("0\n"); //Se n==0 imprimir 0 conforme enunciado

		if(num==1) { //Se n==1 imprimir 1 2 conforme enunciado
			printf("1 2\n");
		}  
		
		if(num>1){
			int i=2; //Contar sequência de Fibonacci
			long ant=1, atual=1, prox; //anterior+atual=próximo, ou seja, os dois últimos números somados da sequência resultam no próximo
			while(!(atual==num)) { //Verificar se chegou no número da entrada
				prox=ant+atual, ant=atual, atual=prox, i++; //próximo=anterior+atual, atual passa a ser anterior, próximo passa a ser atual, aumentar o contador da sequência
			}
			printf("%d\n", i);
		}
  }
	return 0;
}
