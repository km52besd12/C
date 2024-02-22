#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fptr1,*fptr2;
    fptr1=fopen("abc.txt","r");
    if(fptr1==NULL)
    {
        printf("Error! opening file");
        exit(0);
    }
    fptr2=fopen("Destination.txt","w");
    if(fptr2==NULL)
    {
        printf("Error! opening file");
        exit(0);
    }
    while((ch=getc(fptr1))!=EOF)
    {
        fputc(ch,fptr2);
    }
    printf( "File copied successfully\n" );
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}