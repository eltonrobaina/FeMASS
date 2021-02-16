#include<stdio.h>
#include<stdlib.h>

int valores[5]={-40,-50,-3,-20,-100};
int v2[5]={-5,-4,-10,-2,-3};
void max(int a[5])
{
  int i,d;
  d=a[0];
  for(i=0;i<=4;i++)
   {
  if(a[i]>d)
  {
                            d=a[i];
  }
   }
  printf("valor maximo = %d\n",d);
}
                            
 main()
{
max(valores);
max(v2);
system("pause");
}
