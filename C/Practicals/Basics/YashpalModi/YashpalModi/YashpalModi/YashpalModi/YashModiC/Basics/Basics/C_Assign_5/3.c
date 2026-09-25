#include<stdio.h>
#include<conio.h>

int main()
{
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    if(marks<35){
        printf("\n Failed");
    }else if(marks>35 && marks<60){
       printf("\n Second class");
    }else if(marks>60 && marks<80){
       printf("\n First class");
    }else if(marks>80 && marks<100){
        printf("\n Distinction class");
    }else{
       printf("\n Invalid");
    }
    return 0;
}

