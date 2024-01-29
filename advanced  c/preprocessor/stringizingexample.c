#include<stdio.h>
#define SHOW(var,formart) printf(#var "=%" #formart "\n",var);
int main()
{
    int x=9;float y=4.7;char z='@';
    SHOW(x,d);
    SHOW(y,0.3f);
    SHOW(x*y,0.3f);
    SHOW(z,c);
    return 0;
}