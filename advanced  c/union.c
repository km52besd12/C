#include<stdio.h>
    union num
    {
        int i;
        long int l;
        float f;
        double d;
    };
int main()
{
    union num arr[10];
    printf("size of union=%d\n",sizeof(arr));
    arr[0].i=12;
    arr[1].l=40000;
    arr[2].f=11.12;
    arr[3].d=23.34;
    printf("%d\t",arr[0].i);
    printf("adress=%p\t",&arr[0].i);
    printf("%ld\t",arr[1].l);
    printf("adress=%p\t",&arr[0].l);
    printf("%f\t",arr[2].f);
    printf("adress=%p\t",&arr[0].f);
    printf("%f\t",arr[3].d);
    printf("adress=%p\t",&arr[0].d);
}
