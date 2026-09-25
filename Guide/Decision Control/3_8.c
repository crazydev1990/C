
#include<stdio.h>
#include<conio.h>

void main()
{
    float cp,sp,profit,loss,percent;
    printf("\n Enter Cost Price:");
    scanf("%f",&cp);
    printf("\n Enter Sell Price:");
    scanf("%f",&sp);

    if(sp > cp)
    {
        profit=sp-cp;
        percent=(profit/cp)*100;
        printf("\n Profit Occur:%f",profit);
        printf("\n Percent :%f",percent);
    }
    else{
        loss=cp-sp;
        percent=(loss/cp)*100;
        printf("\n Loss Occur:%f",loss);
        printf("\n Percent :%f",percent);
    }
    getch();
}





