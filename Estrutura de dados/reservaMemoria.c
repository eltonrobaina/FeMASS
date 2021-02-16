#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Peca{
       char nome[256];
       int codigo;
       };

int main(int argc, char *argv[])
{
  int *p;
  struct Peca *p1;
  int x;
 
 printf("p: %ld p1: %ld\n",sizeof(p),sizeof(p1));
 

  p = (int *)  malloc(sizeof(int));
 *p = 40;
 printf("%d\n",*p);

  p1 = (struct Peca *) malloc(sizeof(struct Peca));
  strcpy((*p1).nome, "roda");
    
  printf("%d %s\n",*p, (*p1).nome);
  printf("%d %s\n",*p, p1->nome);
  
  system("PAUSE");	
  return 0;
}
