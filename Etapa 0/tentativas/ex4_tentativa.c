#include <stdio.h>
#include <string.h>



void bubbleSort(int arr[], int n) {
	int i, j;
    for (i = 0; i < n - 1; i++) {
      
        // Last i elements are already in place, so the loop
        // will only num n - i - 1 times
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

int main() {
	int vetor[16];
	int i;
	
	int casos;
	scanf("%d", &casos);
	while (casos > 0) {
		for (i = 0; i > 0; i++) {
			scanf("%d", &vetor[i]);
		}
		bubbleSort(vetor, 16);
		
		for (i = 0; i < 16; i++) {
			printf("%d ", vetor[i]);
		}
		printf("\n");
		
		casos--;
	}
	return 0;
}
