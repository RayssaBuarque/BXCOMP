#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int casos;
	scanf("%d", &casos);
	
	while(casos-- > 0){
		int feiticos[6] = {0,0,0,0,0,0};
		
		for(int i = 0; i<9;i++){
			int feitico;
			scanf("%d", &feitico);
			
			if(feitico == 1)
				feiticos[0]++;
			if(feitico == 2)
				feiticos[1]++;
			if(feitico == 3)
				feiticos[2]++;
			if(feitico == 4)
				feiticos[3]++;
			if(feitico == 5)
				feiticos[4]++;
			if(feitico == 6)
				feiticos[5]++;
		}
		
		for(int j = 0; j<9; j++){
			char frase[1000]; 
			scanf("\n%[^\n]", frase);
// 			printf(" %d\n", strlen(frase));
				
		    
		    if (strlen(frase) < 9){
		 
			    int num = frase[7] - '0';
				
				for(int a = 0; a<6; a++){
				if((num - 1) == a && feiticos[a] > 0){
				// 	printf("%d reduziu\n", num);
					feiticos[a]--;
				// 	break;
				}
			}
				// printf("%s\n", frase);
		    }
		}
	
			
			
// 		}
		
		if(feiticos[0] == 0 &&
		    feiticos[1] == 0 &&
		    feiticos[2] == 0 &&
		    feiticos[3] == 0 &&
		    feiticos[4] == 0 &&
		    feiticos[5] == 0 ){
		    
		    printf("Bingoo\n");
		    
		}
		else{
			printf("Ih, sobrou pra depois\n");
			for(int b = 0; b<6; b++){
			    printf("%d\n", feiticos[b]);
		    }
		}
		
		
		
	}
	
	
	return 0;
}
