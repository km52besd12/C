//fseek ->To move the cursor file to specific location

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp=NULL;
    fp=fopen("abc.txt","r+");//in W and W+ mode over write into abc.txt file
    if(fp==NULL)
    {
        printf("can't open file");
        exit(1);
    }
    fseek(fp,4,SEEK_SET);//after cursor moves to 5 letter and increment by one position of file pointer
    ch=fgetc(fp);
    printf("%c",ch);
    fputs("Hi",fp);
   fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("\n%c",ch);
    fseek(fp,-3,SEEK_END);
    ch=fgetc(fp);
    printf("\n%c",ch);
    fclose(fp);
    return 0;

}