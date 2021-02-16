#include <stdio.h>
#include <stdlib.h>
int valores[5]= {-40, -20, -3, -50, -2};
int maximo()
{
   int i, max= valores [0];
   
   for (i=0; i<5; i++)
   {
       
    if (valores[i]> max)
        {
         max=valores[i];
        }
   }
         return max;
}
int main()
   {
             printf ("o valor e : %d\n", maximo());
             system ("pause");   
   }
