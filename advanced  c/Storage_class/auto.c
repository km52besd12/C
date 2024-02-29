#include<stdio.h>
//auto int x=24;//it will give error(can't declare auto in global)
int main(){
        auto int x=20;
        {
            auto int x;
            printf("%d\n",x);//garbage value
        }
        printf("%d\n",x);
        return 0;
}
/*
Default value:Garbage value
Scope:function/block
life time:within Block
location stack*/