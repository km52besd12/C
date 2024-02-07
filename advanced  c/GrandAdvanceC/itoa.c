#include<stdio.h>
void myitoa(int n)
{
    int temp,i,j,neg=0;
    char str[13];
    if(n<0)
    {
        neg=1;
        str[0]='-';
        n=-n;
    }
    temp=n;
    for(i=0;temp>0;i++)
    {
        temp/=10;
    }
    for(j=i+neg;j>=neg;j--)
    {
        str[j]=n%10+'0';
        n/=10;
    }
    str[i+1+neg]=0;
    printf("AFTER my nunmber itoa=%s",str);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    myitoa(n);
    return 0;
}