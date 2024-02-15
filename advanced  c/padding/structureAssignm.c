#include<stdio.h>
#pragma pack(1)//in case of absent gives out put 20
typedef struct student
{
    char a;
    int b;
   long double c;//actually long double size is 12bytes
}s;
int main()
{
    s p;
    printf("size=%d\n",sizeof(p));//out put is 17
    return 0;
}