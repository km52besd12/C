#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    char str[20];
    fp=NULL;
    fp=fopen("abc.txt","r");//if file deosnot exisist returns null
    if(fp==NULL)
    {
        printf("File doesnot Exisit\n");
        exit(1);
    }
  //  fgets(str,5,fp);//it will read upto 4 charcters 5th charcter is null(it will print upto new line)
  //  printf("%s",str);//after new line it will not read
   /*while(!feof(fp))//function end of file(feof) it will read end of file
    {
    ch=fgetc(fp);//it will read only one character above we put while condition then read full file
    printf("%c",ch);
    }*/
    while(!feof(fp))
    {
        fgets(str,2,fp);//buffer size never Exceed beyond this limit eg 20
        printf("%s",str);
    }
    return 0;
}