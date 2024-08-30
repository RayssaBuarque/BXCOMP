#include <stdio.h>
#include <string.h>

// retorna o índice equivalente à letra no vetor de mapa
int pega_indice(char letra) {
  return (int)(letra - 'a');
}

int main() {
  char frase[1000];
  int vetor[26];

  // num casos de teste
  int n; 
  scanf("%d", &n);
  getchar(); // elimina o \n

  while (n > 0) {
    int aux; // contador

    // Completar vetor com 0
    for (aux = 0; aux < 26; aux++)
      vetor[aux] = 0;

    fgets(frase, 1000, stdin); // fgets coloca um \n ao final
    aux = 0;
    int indice;

    while (frase[aux] != '\n' && frase[aux] != '\0' && aux < 1000) {
      // coloca letras em lowercase
      if (frase[aux] >= 'A' && frase[aux] <= 'Z') {
        frase[aux] = 'a' + frase[aux] - 'A';
      }

      // Ignorar espacos e outros caracteres
      if (frase[aux] >= 'a' && frase[aux] <= 'z') {
        indice = pega_indice(frase[aux]);
        vetor[indice]++;
      }

      aux++;
    }

    int eh_pangrama = 1; // true até que se prove o contrário

    // Verificar se há algum valor 0 no vetor
    for (aux = 0; aux < 26; aux++) {
      if (vetor[aux] == 0) {
        eh_pangrama = 0;
        break;
      }
    }

    printf(eh_pangrama ? "Verdadeiro\n" : "Falso\n");

    n--;
  }

  return 0;
}