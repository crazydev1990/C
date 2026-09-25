#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,c,delta,b_square;
    printf("Enter Values Of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    b_square=(int) pow(b,2);
    delta=b_square-(4*a*c);
    if(delta >0){
      printf("\nRoots are Real and Distinct.\n");
    }else if(delta==0)
    {
      printf("\nRoots are real n equal\n");
    }else{
      printf("\nRoots are imaginary\n");
    }
    return 0;
}
