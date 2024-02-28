/*#include<stdio.h>
int main(){
    enum Xenum{c,cpp,java};
    enum Yenum{Xenum};//size will get 4  bytes only
    {
        enum Yenum var;
        printf("%d\n",sizeof(var));//only seclect one only get 4 bytes
        return 0;
    }
}*/
//differnce enum in interview
#include<stdio.h>

typedef enum{
    male,
    female
}gender;
int main(){
    gender var=male;
    printf("%d",var);
    return  0;
}