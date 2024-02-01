#include<stdio.h>
#include<string.h>

int c=0,p,k;
float temp=0;
char HighestName[20];
struct student
{
int ID;
char name[20];
int marks[6];
int d,m,y;
float per;
char gender;
};
void printstudentdata(struct student s)
{
     printf("ID:%d\nname:%s\npercentage:%f\n",s.ID,s.name,s.per);
}
void percentage(struct student *ptr)
{
    int i;
    ptr->per=0;
    for(i=0;i<6;i++)
    {
       ptr->per += ptr->marks[i];
    }
     ptr->per /= 6;
}
int main()
{
    int n;
    printf("how many students want to enter:");
    scanf("%d",&n);
    for(p=0;p<n;p++)
    {
        struct student s;
        printf("enter the ID No:");
        scanf("%d",&s.ID);
        printf("enter the name:");
        scanf("%s",s.name);
        for(int i=0;i<6;i++)
        {
            printf("enter the subject-%d:",i+1);
            scanf("%d",&s.marks[i]);
        }
        printf("enter the date of birth(dd-mm-yy):");
        scanf("%d-%d-%d",&s.d,&s.m,&s.y);
        percentage(&s);
        if(s.per>temp)
        {
            c++;
            temp=s.per;
            k=s.ID;
            strcpy(HighestName,s.name);
        }
        printf("enter the Gender(m or f):");
        scanf(" %c",&s.gender);
        printstudentdata(s);
        if(s.gender=='m'||s.gender=='M')
        {
            printf("Male\n");
        }
        else if(s.gender=='f'||s.gender=='F')
        {
            printf("Female\n");
        }
        else 
        {
            printf("Invalid gender\n");
        }
    }
    printf("\nHighest Percentage person id:%d\nstudent with the highest percentage:\nName:%s\nPercentage:%.3f\n",k,HighestName,temp);
    return 0;
}