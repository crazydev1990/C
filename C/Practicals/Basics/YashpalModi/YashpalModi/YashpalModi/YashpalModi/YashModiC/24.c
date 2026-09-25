#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main()
{
    int n=3,i=0,val,count=0;
    bool won=false;
    for (;i<n;i++)
    {
        printf("\nEnter Value:");
        scanf("%d",&val);
        count++;

            if(val%2==0)
            {
                won=true;
            }
    }
    if(won && count==3)
    {
            printf("\nYou won match");
    }
    else
    {
            printf("\nYou lost match");
    }
    return 0;
}
