#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float p,r,n,si=0,ci=0,total_si=0,total_ci=0;
    printf("Enter Interest Type:");
    char ch;
    scanf("%c",&ch);
    switch(ch){
     case 'S':
         printf("\n Enter Principal Amount:");
         scanf("%f",&p);
         printf("\n Enter Rate Of Interest:");
         scanf("%f",&r);
         printf("\n Enter Number Of Years:");
         scanf("%f",&n);
         si=(p*r*n)/100;

         total_si=p+si;
         printf("\nInterest Amount:%f,Amount With Interest:%f",si,total_si);
         break;
      case 'C':
         printf("\n Enter Principal Amount:");
         scanf("%f",&p);
         printf("\n Enter Rate Of Interest:");
         scanf("%f",&r);
         printf("\n Enter Number Of Years:");
         scanf("%f",&n);
         total_ci=p*pow((1.0+(r/100)),n);
         ci=total_ci-p;
         printf("\nInterest Amount:%f,Amount With Interest:%f",ci,total_ci);
         break;
      default:
          printf("\n Invalid choice");
          break;
    }
    return 0;
}






