#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch;
    char str[50];
    int a;
    printf("enter the number:");
   scanf("%d",&a);
    printf("enter the character:");
    scanf(" %c",&ch);
   
   printf("enter the string:");
    getchar();//for new line
    fgets(str,sizeof(str),stdin);//reason for gets not working because of size not specify
 
    FILE *fp;
    fp=fopen("abc.txt","w");
    /*for(int i=0;i!=strlen(str);i++)
    {
        fputc(str[i],fp);//scanning by string and charcter by character writimg into file
    }*/
   // fputc(ch,fp);
   //fputs(str,fp);//writing whole string at a time by using putting string
   fprintf(fp,"%d %s %c",a,str,ch);//by writing all data types in text file
   
    fclose(fp);
    return 0;
}