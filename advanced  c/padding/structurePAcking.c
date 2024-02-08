#include<stdio.h>
#pragma pack(1)//due to without structure padding (or)without data alignment but slow performance
typedef struct student
{
    char a;
    int b;
}p;
int main()
{
    p s;
    s.b=10;
    s.a='j';
    printf("size=%d",sizeof(s));
    return 0;
}