#include <stdio.h>
#include <stdlib.h>

int x, y;
float r, t;

float f2()
{
      int x;      
      t = r + 2;
      x = y;
      printf("%d %d %f %f\n", x, y, t, r);
      return t + 3;
}
void f1(int x)
{
     int t;
     t = x * 2;
     x =  x + 1;
     r = 3;
     printf("%d %d %d %f\n", x, y, t, r);
     r = f2();
     printf("%d %d %d %f\n", x, y, t, r);
}

void f3(int x, float r)
{
     x = 5;
     r = 7;
     y =4;     
     printf("%d %d %f %f\n", x, y, t, r);
}
int main(int argc, char *argv[])
{
  int r;

  printf("entre com um numero: ");
  //anf("%d",r);
  f1(&r);
  printf("======> %d\n", r);
  system("PAUSE");	
  return 0;
}
