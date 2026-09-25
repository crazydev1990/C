#include<stdio.h>
#include<conio.h>

int main()
{
    int n_fact=1,r_fact=1,n_minus_r_fact=1,num,r,i;
    float npr,ncr;
    printf("\nEnter Num:");
    scanf("%d",&num);
    printf("\nEnter R:");
    scanf("%d",&r);
    for(i=1;i<=num;i++){
        n_fact=n_fact*i;
    }
    for(i=1;i<=r;i++){
        r_fact=r_fact*i;
    }
    for(i=1;i<=(num-r);i++){
        n_minus_r_fact=n_minus_r_fact*i;
    }
    npr=(float)n_fact/n_minus_r_fact;
    ncr=(float)n_fact/(r_fact*n_minus_r_fact);
    printf("\n Value of nPr is:%f",npr);
    printf("\n Value of nCr is:%f",ncr);
    return 0;
}
