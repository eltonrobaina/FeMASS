#include <stdio.h>
#include <stdlib.h>
int potencia(int y, int x)
{
    int resultado;
    if(x==0)
    {
            resultado=1; 
    }
    else
    {
        resultado=y*potencia(y,x-1);
        
    }
    return resultado;
}
int main(int argc, char *argv[])
{
    int y=2,x=2,z;
    z=potencia(y,x);
    printf("resultado:%d ",z);
  
  system("PAUSE");	
  return 0;
}
