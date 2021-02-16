#include <stdio.h>
#include <stdlib.h>

void teste(int v[], int p)
{
   printf("%d %d\n",v[0], p);
   v[0] = 7;
   p = 9;
   printf("%d %d\n",v[0],p);
}


int main(int argc, char *argv[])
{
  int x =10;
  
  int valores[10];
  
  valores[0] =99;
  printf("%d %d\n",valores[0],x);
  teste(valores,x);
  printf("%d %d\n",valores[0],x);
  
  
  system("PAUSE");	
  return 0;
}
