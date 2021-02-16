#include <stdio.h>
#include <stdlib.h>

void f1 (char v1)
{
printf ("v1 %c\n", v1);
v1 = 'w';
printf ("v1 %c\n", v1);
}
void f2 (char *v1)
{
printf ("v1 %c\n",*v1);
*v1 = 'w';
printf ("v1 %c\n", *v1);
}
int main()
{
  char v = 'r';
  f2 (&v);
  printf ("v %c\n", v);

 system("PAUSE");	
  return 0;
}
