#include<stdio.h>
int a=50;
void fun();
int main(){
        int a=10;
        fun();
        {
            int a=20;
            printf("Inside Block1:%d\n",a);//20
        }
        {
            printf("%d\n",a++);//10
        }
         printf("function scope: %d\n",a);//11
        return 0;
}
void fun(){
    int a=30;
    printf("%d\n",a);//30
}