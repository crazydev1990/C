#include<stdio.h>
#include<conio.h>

int main()
{
    int num,mul,i;
    printf("Enter Num:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
      mul=num*i;
      printf("\n %d * %d = %d",num,i,mul);
    }
    printf("\n=======================\n");
    int r,c;
    for(r=1;r<=10;++r){
        for(c=1;c<=3;++c){
            printf("\t%d\t*%d\t=\t%d\t",c,r,r*c);
        }
        printf("\n");
    }
    return 0;
}
