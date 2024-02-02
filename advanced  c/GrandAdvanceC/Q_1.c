#include<stdio.h>
#include<stdlib.h>

char *myaltstr(char *str1,char *str2)
{
    int s1=0,s2=0,i,m,k;
    char *str;
    for(s1=0;str1[s1]!=0;s1++);
    for(s2=0;str2[s2]!=0;s2++);
    str=(char*)malloc(((s1+s2)+1)*sizeof(char));
    for(i=0,m=0,k=0;i<(s1+s2);i++,k++,m++)
    {
        if(k<s1)
        {
            str[i]=str1[k];
            i++;
        }
        if(m<s2)
        {
            str[i]=str2[m];
        }
    }
    str[s1+s2]=0;
    return str;
}
int main()
{
    char str1[20],str2[20];
    printf("enter the string-1:");
    scanf(" %s",str1);
    printf("enter the string-2:");
    scanf(" %s",str2);
    char *Result=myaltstr(str1,str2);
    printf("after Two strings alterd:");
    printf("%s",Result);
    return 0;

}
