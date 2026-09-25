#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>

void main()
{
   int a,b,c;
   char word[30];
   float d,e,f;
   double g,h,i,j;
   bool flag;
   int r;
   int marksA[]={29,45,34,56,76};
   int n;
   int arr[n];

   printf("\n========Primitive DataTypes=========================\n");
   printf("\nAddition Of Intergers\n");
   printf("\n=================================\n");

   printf("Enter Value of A:");
   scanf("%d",&a);
   printf("Enter Value of B:");
   scanf("%d",&b);
   c=a+b;
   printf("Addition Is:%d",c);
   printf("\n=================================\n");

   printf("\n=================================\n");
   printf("\nAddition Of Floating Point Numbers\n");
   printf("\n=================================\n");

   printf("Enter Value of D:");
   scanf("%f",&d);
   printf("Enter Value of E:");
   scanf("%f",&e);
   f=d+e;
   printf("Addition Is:%f",f);
   printf("\n=================================\n");
   printf("\nAddition Of Double Numbers\n");
   printf("\n=================================\n");

   printf("Enter Value Of G:");
   scanf("%lf",&g);
   printf("Enter Value Of H:");
   scanf("%lf",&h);
   i=g+h;
   printf("Addition is:%lf",i);


   printf("\n=================================\n");
   printf("\nCharacter Type\n");
   printf("\n=================================\n");
   printf("\nEnter More:");
   char ch2;
   printf("\nEnter Here:");
   scanf(" %c",&ch2);
   printf("Entered Character Is:%c",ch2);
   char ch,ch1;
   printf("\nEnter 1st Char:");
   ch=getch();
   printf("\nEnter 2nd Char:");
   ch1=getch();
   printf("\nYour Entered Characters Are:%c %c",ch,ch1);


   printf("\n=================================\n");
   printf("\nBoolean Type\n");
   printf("\n=================================\n");

   printf("\nEnter Flag:");
   scanf("%d",&flag);
   switch(flag)
   {
   case 1:
         printf("You choose True");
         break;
   case 0:
         printf("You choose False");
         break;
   default:
         printf("Enter Valid Option");
   }

   printf("\n=================================\n");
   printf("\nString Type\n");
   printf("\n=================================\n");

   printf("\nEnter String Value:");
   scanf("%s",word);
   printf("\nYour Entered String Is:%s",word);
   printf("\n\n\n\n");



   getch();
}
