#include <stdio.h>
#include <string.h>

int main()
{
    
    int T ; // qtd casos
    scanf("%d", &T);

	while(T>0){
		
		int n, m, r, j, i, num, k, NUM1, NUM2;
		int verif = 0;
		int dif = 1;
		scanf("%d %d", &n, &m);
		scanf("%d", &r);
		scanf("%d", &k);
	
		int matriz[m][n];
		for (NUM1 = 0; NUM1< m; NUM1++){
			for (NUM2 = 0; NUM2< n; NUM2++){
				matriz[NUM1][NUM2] = 0;
			}
		}
		for(i = 0; i<r; i++){
			
			for(j=0;j<k;j++){
				char stringSi[k];
				scanf("\n%[^\n]",stringSi);
				
				for(num = 4; num<k; num++){
					if(stringSi[num] == 'D'){
						stringSi[2]++;
					}
					if(stringSi[num] == 'E'){
						stringSi[2]--;
					}
					if(stringSi[num] == 'C'){
						stringSi[0]--;
					}
					if(stringSi[num] == 'B'){
						stringSi[0]++;
					}
				}				
				if(matriz[stringSi[0]][stringSi[2]] == 1){
				    
				    printf("Hmm, parece que tivemos um pequeno contratempo rob�tico.\n");
				    goto a;
				    verif = 1;
				} else{
				    matriz[stringSi[0]][stringSi[2]] = 1;
				    
				}/*
				if(matriz[stringSi[0]][stringSi[2]] != 0){
					
					verif = 1;
				}
				else{
					
					
				}*/
				
			}
		}
		
		 
		
		
		if (verif == 0) printf("Eureka! Eu sabia que minha program��o era impec�vel.\n");
		a: 
		T--;
	}
    

    return 0;
}
