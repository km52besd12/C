#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[20];
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
        printf("Error\n");
        exit(1);
    }
    while(!feof(fp))
    {
    fgets(str,5,fp);
    printf("%s",str);//file pointer moves upto end of file
    }
    fputs(" Madhuri",fp);//fp points to end of file then starts concantation of madhuri in abc.txt file
    fclose(fp);
    return 0;
}