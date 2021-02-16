#include <stdio.h>
#include <stdlib.h>


void f1(char v1){
     printf("v1 %c\n",v1);   
     v1 = 'w';
     printf("v1 %c\n",v1);    
}

void f2(char *v1){
     printf("v1 %c\n",*v1);
     *v1 = 'w';
     printf("v1 %c\n",*v1);    
}


int main()
{
  char v = 'R';
  
  f1(v);
  f2(&v);
  printf("v %c\n",v);
 


  int x;
  printf("entre com um valor: ");
  scanf("%d",&x);
  printf("o valor e: %d\n", x);
  
  
  system("PAUSE");	
  return 0;
}
