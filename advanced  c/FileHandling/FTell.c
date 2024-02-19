#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,str[30];
    int pos;
    FILE *fp=NULL;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("can't open file");
        exit(1);
    }
    pos=ftell(fp);
    ch=fgetc(fp);
    printf("\n%c",ch);
    printf("\n%d",ftell(fp));
    printf("\n%d",pos);
    fscanf(fp,"%s",str);
    printf( "\nThe string is %s\n", str );
    printf("\n%d",ftell(fp));//to find exact position of file pointer index value in file
    fseek(fp,0,SEEK_END); //set the pointer to end of the file
    printf("\nlength of file=%d",ftell(fp));//it find length of file by using ftell function returns long int
    fclose(fp);
    return 0;
}