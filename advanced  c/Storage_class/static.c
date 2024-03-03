#include<stdio.h>
void display();
void main(){
        display();
        display();
       // printf("x=%d\n", x);//give error
}
void display(){
        static int x;
        x+=10;
        printf("x=%d\n",x);
}