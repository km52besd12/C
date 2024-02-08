#include<stdio.h>
void myatoi(char *str)
{
    int i,j;
    for(i=0;str[i]!=0;i++);
    int arr[i];
    for(j=0;str[j]!=0;j++)
    {
        arr[j]=str[j]-'0';
    }
    for(j=0;j<i;j++)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
}
int main()
{
    char str[15];
    printf("enter the number:");
    scanf("%s",str);
    myatoi(str);
}