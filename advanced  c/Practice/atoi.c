#include<stdio.h>
int my_atoi(char *str){
        int i=0,res=0,sign=1;
        for(i=0;str[i]!='\0';i++){
                if(str[i]=='-')
                    sign=-1;
                else if(str[i]=='+')
                    sign=1;
                else if(str[i]<='9'&&str[i]>='0')
                    res=res*10+(str[i]-'0');
        }
        return sign*res;
}
int main(){
    char str[20];
    int a;
    printf("enter a number string:");
    scanf("%s",str);
    a=my_atoi(str);
    printf("atoi result=%d\n",a);
    return 0;
}