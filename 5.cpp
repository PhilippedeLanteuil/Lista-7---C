#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[51], vogais[6] = {'a', 'e', 'i', 'o', 'u'}, caracacter;
  int i, j, cont = 0;

  printf("Insira uma palavra: ");
  gets(palavra);

  printf("Insira um caractere para substituir as vogais: ");
  scanf("%c",&caracacter);


  for (i = 0; i < 51 && palavra[i] != '\0'; i++) {
    for (j = 0; j < 5; j++){
      if (palavra[i] == vogais[j]){
        cont++;
        palavra[i] = caracacter;
      }
    }
  }
  
  printf("\nQuantidade de vogais inseridas: %d", cont);
  printf("\nPalavra alterada: %s", palavra);

  return 0;
}

