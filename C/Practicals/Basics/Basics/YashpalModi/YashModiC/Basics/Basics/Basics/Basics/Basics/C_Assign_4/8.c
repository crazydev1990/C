
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float areaTr=0,areaCircle=0,areaRect=0;
    float h,b,r;
    char ch;
    int side1,side2;
    printf("Enter Shape:");
    scanf("%c",&ch);
    switch(ch){
     case 'R':
         printf("\n Enter Side1:");
         scanf("%d",&side1);
         printf("\n Enter Side2:");
         scanf("%d",&side2);
         areaRect=side1*side2;
         printf("Area Of Rectangle:%f",areaRect);
         break;
      case 'T':
         printf("\n Enter Height:");
         scanf("%f",&h);
         printf("\n Enter Base:");
         scanf("%f",&b);
         areaTr=0.5*h*b;
         printf("Area Of Triangle:%f",areaTr);
         break;
      case 'C':
         printf("\n Enter Radius:");
         scanf("%f",&r);
         areaCircle=PI*r*r;
         printf("Area Of Circle:%f",areaCircle);
         break;
      default:
          printf("\n Invalid choice");
          break;
    }
    return 0;
}





