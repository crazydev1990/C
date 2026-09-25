#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i,even,odd;
    printf("\n Enter Total Number:");
    scanf("%d",&num);
    printf("\nEven Numbers:\n");
    for(i=1;i<=num;i++)
    {
        even=i<<1;
        printf("%d\n",even);
    }
    printf("\nOdd Numbers:\n");
    for(i=0;i<num;i++)
    {
        odd=(i<<1)|1;
        printf("%d\n",odd);
    }
    return 0;
}
