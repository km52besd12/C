#include<stdio.h>
union abc//advantage save the memory(it is mostly used in olden days memory cost is high)
{
    int a;
    char b;
    float c;
};
int main()
{
     union abc s,*ptr;
     ptr=&s;
     s.a=2;
     s.b=97;
     s.c=9.3;
     printf("a=%d\nb=%c\nc=%f\n",ptr->a,ptr->b,ptr->c);//the draw back of union is stores last value only
     return 0;
}