#include<stdio.h>
struct student
{
    char a;
    int b;
};
int main()
{
    struct student s;
    printf("size of structure=%d\n",sizeof(s));
    return 0;
}
/*due to 32 bit syst take size of word adress is 4byte for char 4,int 4 total 8byte  (3byte waste or padding) due to faster operation take cpu or processor excutes in one cycle
default padding done by compiler*/