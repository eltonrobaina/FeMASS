#include<stdio.h>
#include<stdlib.h>
int x, y;
void f1 (int x){
     x=x*x;
     ("x ao quadrado e: %d\n", x);
     }
void f2 (int y, int x){
     y=y*x;
     }
void g1 (){
     x= x*x;
     printf ("x ao quadrado e: %d\n", x);
     }
void g2 (){
     y= y*x;
     printf ("y vezes x e: %d\n", y);
     }
int main (int argc, char *argv[])
{
    x=10;
    y=2;
    f1(x);
    f2(y,x);
    //g1();
    //g2();
    printf ("o valor de x=%d e y=%d\n", x,y);
    system ("pause");
    return 0;
}
    
