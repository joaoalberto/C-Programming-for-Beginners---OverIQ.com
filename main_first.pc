/* Programa C - 10-03-2020 */

#include <stdio.h>
#include "functions.h"

#define TAM_LINHA 27

int myfunc(void);

int main_st(void) { //int main(void)
  int resultado;
  printf("Teste de funcao\n");
  resultado = funcao_0a100(100,102,103); 

  resultado = myfunc();

  FILE *pf;
  char linha [TAM_LINHA];

  pf = fopen("arq.txt", "rb");
  fread(&linha,sizeof(char),TAM_LINHA,pf);
  printf("\nO CONTEÚDO DO ARQUIVO É:\n %s \n", linha);
  fclose(pf);

  return 0;
}

int myfunc(void) {
  return printf("\ninside myfunc\n");
}