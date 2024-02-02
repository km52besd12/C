#include<stdio.h>
#define SUM(x,y) ((x)+(y))
#define PROD(x,y) ((x)*(y))
#define PI 3.14
#define PISQUARE PI*PI
int main()
{
    int m,n;
    float o,p,q,k;
    m=SUM(2,3);
    
    n=PROD(2,3);
    o=SUM(2.3,3);
    p=PROD(2.8,2.9);
    q=SUM(2.9,9.8);
    k=PISQUARE;
    printf("m=%d,n=%d,o=%.3f,p=%.3f,q=%.3f,k=%.3f",m,n,o,p,q,k);
}