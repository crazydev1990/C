#include<stdio.h>
#include<conio.h>

int main()
{
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    if(marks >35 && marks < 100)
    {
        printf("\n You Have Passed the Exam!");
    }
    else
    {
        goto label;
    }
    return 0;
    label:
        printf("\n You Are Failed in Exam!");
    return 0;
}
