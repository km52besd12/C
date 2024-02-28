#include<stdio.h>
int main(){
    enum gender{male,female,others};
    enum gender g;
    int choice;
    printf("Enter gender (0 for male, 1 for female, 2 for others): ");
    scanf("%d", &choice);
    g = (enum gender)choice;
    if(g==male){
        printf("30 percent discount");
    }else if (g==female) {
        printf("50 percent discount");
    } else if(g==others){
        printf("60 percent Discount");
    }
    return 0;
}
