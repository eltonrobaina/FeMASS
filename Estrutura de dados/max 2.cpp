#include <stdio.h>
#include <stdlib.h>
int valores[5]= {-40, -20, -3, -50, -2};
int v2[5]={1, 2, 3, 4, 5};
int v3[6]={1,2,3,4,5,6};
int max(int v[],int tamanho)
{
   int i;
   int maior;
   maior= v[0];
   
   for (i=1; i<tamanho; i++)
   {
       
    if (maior<v[i])
        {
         maior=v[i];
        }
   }
         return maior;
}
int main()
   {
          int m=5;
          
          m=max(valores,5);
          printf("o maior valor recebera %d\n",m);
                    
          m=max(v2,5);
             printf ("o ganhador ganhara: %d\n",m*100);
          
          m=max(v3,6);
          printf("o maior valor e: %d\n",m);
          
             system ("pause");   
   }
