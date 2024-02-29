#include<stdio.h>
//register int y=9;//it will give error
int main(){
    register int i,sum=0;
    for(i=0;i<10;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
/*
Default value:Garbage value
scope:function/method
location:CPU register
life time:block
int *ptr=&i ->it will not allowed in CPU ,can't get adress of varible in CPU
*/