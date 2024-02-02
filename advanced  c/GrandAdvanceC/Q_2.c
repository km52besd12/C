#include<stdio.h>
#include<stdlib.h>

int k,c=0,m=0;
char *mystrReplace(char *str,char ch,char *rep)
{
    int i,l,j,p;
    char *str1;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]==ch)
        {
            c++;
        }
    }
    j=i;
    for(k=0;rep[k]!=0;k++);
    l=k;
    str1=(char*)malloc((i+(k*c)+1)*sizeof(char));
    p=i+l*c;
    for(k=0;k<p;k++,m++)
    {
        if(str[m]==ch)
        {
            for(i=0;rep[i]!=0;i++)
            {
                str1[k]=rep[i];
                k++;
            }
            m++;
        }
        str1[k]=str[m];
    }
    str1[p]=0;
    return str1;
}
int main()
{
    char str[20],ch,rep[10];
    printf("enter the main string:");
    scanf(" %s",str);
    printf("enter the charcter:");
    scanf(" %c",&ch);
    printf("enter the replace string:");
    scanf(" %s",rep);
    char *Result=mystrReplace(str,ch,rep);
    printf("%s\n",Result);
    return 0;
}