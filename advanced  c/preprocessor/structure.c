#include<stdio.h>
#include<string.h>
struct student
{
    int ID;
    char names[50];
    int d1,m1,y1,d2,m2,y2;
    char gender[10];
};
struct student s1,s2;
void printstudentdata(struct student s)
{
    printf("\nID:%d\nname:%s\nGender:%s\ndate of birth:%d-%d-%d\ndate of joining:%d-%d-%d",s.ID,s.names,s.gender,s.d1,s.m1,s.y1,s.d2,s.m2,s.y2);

}
int main()
{
    printf("%lu %lu %lu",sizeof(struct student),sizeof(s1),sizeof(s2));
    s1.ID=1;
    s2.ID=2;
    strcpy(s1.names,"murali");
    strcpy(s1.gender,"Male");
    s2.names[0]='R';
    s2.names[1]='A';
    s2.names[2]='M';
    s2.names[3]=0;
    strcpy(s2.gender,"Male");
    s1.d1=01;
    s1.m1=8;
    s1.y1=2000;
    s1.d2=02;
    s1.m2=06;
    s1.y2=2023;
    s2.d1=01;
    s2.m1=4;
    s2.y1=2001;
    s2.d2=02;
    s2.m2=05;
    s2.y2=2023;
   // printf("\nDate of joining:");
   // printf("%d-%d-%d",s2.d2,s2.m2,s2.y2);
    printstudentdata(s1);
    printstudentdata(s2);
    return 0;
}