#include<stdio.h>
#include<string.h>
typedef struct student
{
    int id;
    char name[10];
}s;
int main()
{
    s s1;//replace the whole struct student to s
    s1.id=9;
    typedef int it;
    it b=108;
    printf("b=%d\n",b);
    strcpy(s1.name,"murali");
    printf("ID=%d\nname=%s\n",s1.id,s1.name);
    return 0;
}