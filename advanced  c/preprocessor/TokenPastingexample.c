#include<stdio.h>
#define PASTE(a,b) a##b
#define MARKS(subject) marks_##subject
int main()
{
    int k2=15,k3=25;
    int marks_chem=89,marks_maths=99;
    printf("%d %d",PASTE(k,2),PASTE(k,3));
    printf("%d %d",MARKS(chem),MARKS(maths));

}