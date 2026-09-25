#include<stdio.h>
#include<conio.h>

int main()
{
    int i,a[50],sum=0;
    float avg=0.0;
    printf("\n Enter Marks Of 50 Students:");
    for(i=0;i<=49;i++)
    {
        scanf("\n%d",&a[i]);
    }
    for(i=0;i<=49;i++)
    {
        printf("\n%d\n",a[i]);
        sum=sum+a[i];
    }
    avg=sum/50;
    printf("\nAverage Of 50 Students is:%f",avg);
    return 0;
}
