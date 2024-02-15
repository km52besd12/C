/*THREE main differnece between r+ and w+ mode is 
1->In R+ if file deosnt exisit,it wont be create any file
2->In W+ mode if file creates and erasie old data and write new data and read that data by using rewind key word
3->In R+ mode best for modification in particaluar line of file and without earising data*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    char str[20];
    fp=fopen("abc.txt","w+");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    fputs("Kernel masters",fp);
    rewind(fp);//because cursor moves from to end of file to strating of file
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    free(fp);
    return 0;
}