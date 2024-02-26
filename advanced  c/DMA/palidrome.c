#include<stdio.h>
#include<string.h>
int main()
{
    int p,i,j,c=0,palindrome=1;
    char str[20];
    printf("enter the string:");
    scanf("%s",str);
    p=strlen(str);
    for(i=0;i<p/2;i++)
    {
        if(str[i]!=str[p-i-1])
        {
           palindrome=0; 
            break;
        }
    }
    if(palindrome)
        printf("It is a palindrome\n");
    else
        printf("It is not palindrome\n");
    return 0;
}