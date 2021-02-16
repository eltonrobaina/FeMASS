#include<stdio.h>
#include<stdlib.h>

int x;
int y;
void f2(int *y)
{
*y=*y+10;
}
void f1 ()
{
int x;
x=10;
f2(&x;
printf("%d %d \n",x,y);
}

main()
{
x=3;y=5;
printf("%d %d\n",x,y);
f1();
printf("%d %d\n",x,y);
system("pause");
}
