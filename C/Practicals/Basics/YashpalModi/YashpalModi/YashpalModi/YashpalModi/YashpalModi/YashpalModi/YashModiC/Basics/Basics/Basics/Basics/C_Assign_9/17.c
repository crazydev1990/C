#include<stdio.h>
#include<conio.h>

int main()
{
    int age;
    printf("\n Enter Age:");
    scanf("%d",&age);
    if(age < 18)
    {
        goto label;
    }
    printf("\n You Are Eligible To Vote");
    return 0;
    label:
        printf("\n Sorry You Are Not Eligible To Vote\n");
    return 0;
}
