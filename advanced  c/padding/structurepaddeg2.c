#include<stdio.h>
struct student
{
    char a;
    int b;
    char c;
    /*in case of order change to increasing order give out put
    like this:
    char a;
    char c;
    int b;
    output is 8 byte because it follow smart increasing order of formart
    */
};
int main()
{
    struct student s;
    printf("size=%d\n",sizeof(s));
    return 0;
}
/*it will give out put 12 bytes due to padding wasting 3bytes in char a,c*/
/*
proper way of follow:
char 
int
float
double
*/