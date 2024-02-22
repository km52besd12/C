#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int count=1,words=0;
    FILE *fp=NULL;
    fp=fopen("abc.txt", "r");
    if(fp==NULL)
    {
        printf("Error in opening file.\n");
        exit(1);
    }
   // for(ch=getc(fp);ch!=EOF;ch=fgetc(fp))
    while((ch = getc(fp)) != EOF)
    {
        words++;
        if(ch=='\n')
        {
            count++;
        }
    }
    fclose(fp);
    printf("no of words in file=%d\nno of lines=%d\n",words,count);
    return 0;
}