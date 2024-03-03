#include<stdio.h>
void fun2();
void  fun1();
extern int x;
int main(){
    extern int x;//here also no problem
    printf("x=%d\n",x);
    fun1();
    fun2();
    
}
void  fun1(){
        int x = 7;
        x+=10;
        printf("x=%d\n",x);
}
void fun2(){
        int y=10;
        y++;
        printf("y=%d\n",y);
}
int x=100;