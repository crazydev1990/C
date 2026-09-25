#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main(){
  int month;
  printf("\n Enter Month(1-12):");
  scanf("%d",&month);
  switch(month){
 case 1:
     printf("\n Jan has 31 days");
     break;
 case 2:
     printf("\n Feb has 28/29 days");
     break;
 case 3:
     printf("\n Mar has 31 days");
     break;
 case 4:
     printf("\n Apr has 30 days");
     break;
 case 5:
     printf("\n May has 31 days");
     break;
 case 6:
     printf("\n June has 31 days");
     break;
 case 7:
     printf("\n July has 31 days");
     break;
 case 8:
     printf("\n Aug has 31 days");
     break;
 case 9:
     printf("\n Sept has 30 days");
     break;
 case 10:
     printf("\n Oct has 31 days");
     break;
 case 11:
     printf("\n Nov has 30 days");
     break;
 case 12:
     printf("\n Dec has 31 days");
     break;
 default:
     printf("\n Invalid");
     break;
   }
  getch();
}

