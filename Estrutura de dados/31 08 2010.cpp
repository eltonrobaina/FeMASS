#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *p;
  int x=100;
  char c='a';
  p=&c;//atribuido a p o endere�o de c
  *p='h';
  c='d';
  printf("o valor de c e: %c\n",*p);
  printf("p est� apontando para o endere�p: %p\n", p);
  printf("no endere�o %p tem o valor %c\n", p, *p);

  system("PAUSE");	

  return 0;
}
