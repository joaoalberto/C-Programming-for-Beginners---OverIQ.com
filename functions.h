int funcao_0a100(int a, int b, int c) {
  int vetor[3] = {a, b, c};
  for(int i = 0; i <= 2; i++)
  {
    //printf("%d\n", vetor[i]);
    if (vetor[i]>100 || vetor[i]<0) 
      printf("%d nao estah na faixa entre 0 e 100\n", vetor[i]);
    else
      printf("%d estah na faixa entre 0 e 100\n", vetor[i]);
  }
  return 0;
}