#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int a,b;
    printf("no of arguments=%d",argc);
    printf("%s",argv[0]);
    a=atoi(argv[1]);
    b=atoi(argv[3]);
    switch(argv[2][0])
    {
        case '+':printf("%d",a+b);break;
        case '-':printf("%d",a-b);break;
        case '*':printf("%d",a*b);break;
    }
    return 0;
}