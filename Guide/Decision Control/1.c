#include<stdio.h>
#include<conio.h>

int main()
{
    int m1,m2,m3;
    printf("Enter 3 Numbers:");
    scanf("%d %d %d",&m1,&m2,&m3);
    if(m1>m2){
        if(m1>m3){
          printf("\n %d is max",m1);
        }else{
           printf("\n %d is max",m3);
        }
    }
    else{
        if(m3>m2){
            printf("\n %d is max",m3);
        }else{
           printf("\n %d is max",m2);
        }
    }
    return 0;
}
