#include<stdio.h>
void fun2();
void fun1();
void main(){
        extern int a;//if we commented it will give error
        printf("a=%d\n",a);
        fun1();
        fun2();
}
void fun1(){
        int a=2;a++;
        printf("a=%d\n",a);
}
void fun2(){
        printf("Hello world\n");
}
int a=10;