#include<stdio.h>
#include<conio.h>

int main()
{
    int choice,num_of_operands,type_of_operation;
    int operand1,operand2,result=0,digits;
    char ch;
    printf("\n===================================\n");
    printf("\n 1. Unary Operators\n");
    printf("\n 2. Arithmetic Operators\n");
    printf("\n 3. Relational Operators\n");
    printf("\n 4. Logical Operators\n");
    printf("\n 5. Assignment Operators\n");
    printf("\n 6. Bitwise Operators\n");
    printf("\n 7. Conditional Operators\n");
    printf("\n===================================\n");
    printf("\nEnter Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
               printf("\n Unary Operators:\n");
               num_of_operands=1;
               printf("\n Enter Type Of Operation:");
               printf("\n===================================\n");
               printf("\n 1.1. Post Increment\n");
               printf("\n 1.2. Pre Icrement\n");
               printf("\n 1.3. Post Decrement\n");
               printf("\n 1.4. Pre Decrement\n");
               printf("\n 1.5. sizeOf Operation\n");
               printf("\n===================================\n");
               printf("\n Which Operation You Want To Perform?:");
               scanf("%d",&type_of_operation);
               switch(type_of_operation)
               {
                   case 1:
                            printf("\n Post Increment \n");
                            printf("\n Enter Operand Value:");
                            scanf("%d",&operand1);
                            printf("\n Value Of Operand Before Post Increment:%d",operand1);
                            operand2=operand1++;
                            printf("\n Value Of Operand After Post Increment:%d",operand1);
                            printf("\n Value Of 2nd Operand After Assign:%d",operand2);
                            break;
                   case 2:
                            printf("\n Pre Increment \n");
                            printf("\n Enter Operand Value:");
                            scanf("%d",&operand1);
                            printf("\n Value Of Operand Before Pre Increment:%d",operand1);
                            operand2=++operand1;
                            printf("\n Value Of Operand After Pre Increment:%d",operand1);
                            printf("\n Value Of 2nd Operand After Assign:%d",operand2);
                            break;
                   case 3:
                            printf("\n Post Decrement \n");
                            printf("\n Enter Operand Value:");
                            scanf("%d",&operand1);
                            printf("\n Value Of Operand Before Post Decrement:%d",operand1);
                            operand2=operand1--;
                            printf("\n Value Of Operand After Post Decrement:%d",operand1);
                            printf("\n Value Of 2nd Operand After Assign:%d",operand2);
                            break;
                   case 4:
                            printf("\n Pre Decrement \n");
                            printf("\n Enter Operand Value:");
                            scanf("%d",&operand1);
                            printf("\n Value Of Operand Before Pre Decrement:%d",operand1);
                            operand2=--operand1;
                            printf("\n Value Of Operand After Pre Decrement:%d",operand1);
                            printf("\n Value Of 2nd Operand After Assign:%d",operand2);
                            break;
                   case 5:
                            printf("\n Size Of Operation \n");
                            printf("\n Enter Operand Value:");
                            scanf("%d",&operand1);
                            operand2=(int)sizeof(operand1);
                            printf("\n Operand 1 Occupies %d bytes in memory",operand2);
                            break;
                   default:
                            printf("\n Invalid Operation");
               }
               break;
       case 2:
               printf("\n Arithmetic Operators:\n");
               num_of_operands=2;
               printf("\n Enter Type Of Operation:");
               printf("\n===================================\n");
               printf("\n 2.1. Arithmetic Addition Operation\n");
               printf("\n 2.2. Arithmetic Subtraction Operation\n");
               printf("\n 2.3. Arithmetic Division Operation\n");
               printf("\n 2.4. Arithmetic Multiplication Operation\n");
               printf("\n 2.5. Arithmetic Modulo Operation\n");
               printf("\n===================================\n");
               printf("\n Which Operation You Want To Perform?:");
               scanf("%d",&type_of_operation);
               switch(type_of_operation)
               {
                  case 1:
                           printf("\n Arithmetic Addition Operation \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1+operand2;
                           printf("\n Addition Of 2 Values:%d",result);
                           break;
                  case 2:
                           printf("\n Arithmetic Subtraction Operation \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1-operand2;
                           printf("\n Subtraction Of 2 Values:%d",result);
                           break;
                  case 3:
                           printf("\n Arithmetic Division Operation \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1/operand2;
                           printf("\n Division Of 2 Values:%d",result);
                           break;
                  case 4:
                            printf("\n Arithmetic Multiplication Operation \n");
                            printf("\n Enter Operand Value:");
                            scanf("%d",&operand1);
                            printf("\n Enter Operand Value:");
                            scanf("%d",&operand2);
                            result=operand1*operand2;
                            printf("\n Multiplication Of 2 Values:%d",result);
                            break;
                  case 5:
                             printf("\n Arithmetic Modulo Operation \n");
                             printf("\n Enter Operand Value:");
                             scanf("%d",&operand1);
                             printf("\n Enter Operand Value:");
                             scanf("%d",&operand2);
                             result=operand1%operand2;
                             printf("\n Modulo/Reminder Of 2 Values:%d",result);
                             break;
                  default:
                           printf("\n Invalid Operation");
               }
               break;
       case 3:
               printf("\n Relational Operators:\n");
               num_of_operands=2;
               printf("\n Enter Type Of Operation:");
               printf("\n===================================\n");
               printf("\n 3.1. Greater Than \n");
               printf("\n 3.2. Greater Than Equal To\n");
               printf("\n 3.3. Less Than\n");
               printf("\n 3.4. Less Than Equal To\n");
               printf("\n 3.5. Is Equal To\n");
               printf("\n 3.6. Not Equal To\n");
               printf("\n===================================\n");
               printf("\n Which Operation You Want To Perform?:");
               scanf("%d",&type_of_operation);
               switch(type_of_operation)
               {
                   case 1:
                           printf("\n Greater Than Check \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1 > operand2;
                           if(result == 1)
                           {
                               printf("%d is bigger",operand1);
                           }
                           else
                           {
                             printf("Condition is false here");
                           }
                           break;
                   case 2:
                           printf("\n Greater Than Equal To Check \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1 >= operand2;
                           if(result == 1)
                           {
                               printf("%d is bigger or equal to",operand1);
                           }
                           else
                           {
                             printf("Condition is false here");
                           }
                           break;
                   case 3:
                           printf("\n Less Than Check \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1 < operand2;
                           if(result == 1)
                           {
                               printf("%d is smaller",operand1);
                           }
                           else
                           {
                             printf("Condition is false here");
                           }
                           break;
                   case 4:
                           printf("\n Less Than Equal To Check \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1 <= operand2;
                           if(result == 1)
                           {
                               printf("%d is smaller or equal to",operand1);
                           }
                           else
                           {
                             printf("Condition is false here");
                           }
                           break;
                   case 5:
                           printf("\n Is Equal To Check \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=(operand1 == operand2);
                           if(result == 1)
                           {
                               printf("%d is equal to",operand1);
                           }
                           else
                           {
                             printf("Condition is false here");
                           }
                           break;
                   case 6:
                           printf("\n Not Equal To Check \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=(operand1 != operand2);
                           if(result == 1)
                           {
                               printf("%d is not equal to",operand1);
                           }
                           else
                           {
                             printf("Condition is false here");
                           }
                           break;
                  default:
                    printf("\n Invalid Operation");
               }

               break;
       case 4:
               printf("\n Logical Operators:\n");
               num_of_operands=2;
               printf("\n Enter Type Of Operation:");
               printf("\n===================================\n");
               printf("\n 4.1. And (Both Conditions True) \n");
               printf("\n 4.2. OR (Atleast One Condition True)\n");
               printf("\n 4.3. Not (True To False)\n");
               printf("\n===================================\n");
               printf("\n Which Operation You Want To Perform?:");
               scanf("%d",&type_of_operation);
               switch(type_of_operation)
               {
                  case 1:
                           printf("\n And (Both Conditions True) \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=(operand1 != operand2) && (operand1 >= operand2);
                           if(result == 1)
                           {
                               printf("\nBoth Conditions Are True");
                           }else{
                               printf("\nBoth Conditions Are Not Satisfied");
                           }
                           break;
                  case 2:
                           printf("\n OR (Atleast One Condition True) \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=(operand1 != operand2) || (operand1 >= operand2);
                           if(result == 1)
                           {
                               printf("\nAtleast 1 Condition Is True");
                           }else{
                               printf("\nAtleast 1 Condition Is Not Satisfied");
                           }
                           break;
                  case 3:
                           printf("\n Not (True To False) \n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=!(operand1 == operand2);
                           if(result == 1)
                           {
                               printf("\nNot Condition Is True");
                           }else{
                               printf("\nNot Condition Is Not Satisfied");
                           }
                           break;
                  default:
                           printf("\n Invalid Operation");
               }
               break;
       case 5:
               printf("\n Assignment Operators:\n");
               num_of_operands=2;
               printf("\n Enter Type Of Operation:");
               printf("\n===================================\n");
               printf("\n 5.1. Simple Assignment \n");
               printf("\n 5.2. Compound Assignment\n");
               printf("\n===================================\n");
               printf("\n Which Operation You Want To Perform?:");
               scanf("%d",&type_of_operation);
               switch(type_of_operation)
               {
                  case 1:
                          printf("\n Simple Assignment Operation \n");
                          printf("\n Enter Operand Value:");
                          scanf("%d",&operand1);
                          operand1=operand1+2;
                          operand2=operand1;
                          printf("Result is:%d",operand2);
                          break;
                  case 2:
                          printf("\n Compound Assignment Operation \n");
                          printf("\n Enter Type Of Operation:");
                          printf("\n===================================\n");
                          printf("\n 5.2.1. += Shorthand Assign Operation\n");
                          printf("\n 5.2.2. -= Shorthand Assign Operation\n");
                          printf("\n 5.2.3. *= Shorthand Assign Operation\n");
                          printf("\n 5.2.4. /= Shorthand Assign Operation\n");
                          printf("\n 5.2.5. %= Shorthand Assign Operation\n");
                          printf("\n===================================\n");
                          printf("\n Which Operation You Want To Perform?:");
                          scanf("%d",&type_of_operation);
                          switch(type_of_operation)
                          {
                             case 1:
                                     printf("\n += Shorthand Assign Operation\n");
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand1);
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand2);
                                     operand1 += operand2;
                                     printf("\n Result is:%d",operand1);
                                     break;
                             case 2:
                                     printf("\n -= Shorthand Assign Operation\n");
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand1);
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand2);
                                     operand1 -= operand2;
                                     printf("\n Result is:%d",operand1);
                                     break;
                             case 3:
                                     printf("\n *= Shorthand Assign Operation\n");
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand1);
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand2);
                                     operand1 *= operand2;
                                     printf("\n Result is:%d",operand1);
                                     break;
                             case 4:
                                     printf("\n /= Shorthand Assign Operation\n");
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand1);
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand2);
                                     operand1 /= operand2;
                                     printf("\n Result is:%d",operand1);
                                     break;
                             case 5:
                                     printf("\n %= Shorthand Assign Operation\n");
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand1);
                                     printf("\n Enter Operand Value:");
                                     scanf("%d",&operand2);
                                     operand1 %= operand2;
                                     printf("\n Result is:%d",operand1);
                                     break;
                             default:
                                      printf("\n Invalid Operation");

                          }
                          break;
                  default:
                           printf("\n Invalid Operation");
               }
               break;
       case 6:
               printf("\n Bitwise Operators:\n");
               num_of_operands=1;
               printf("\n Enter Type Of Operation:");
               printf("\n===================================\n");
               printf("\n 6.1. Bitwise And(&) Operation\n");
               printf("\n 6.2. Bitwise Or(|) Operation\n");
               printf("\n 6.3. Bitwise Xor(^) Operation\n");
               printf("\n 6.4. Bitwise Not(~) Operation\n");
               printf("\n 6.5. Bitwise LeftShift(<<) Operation\n");
               printf("\n 6.6. Bitwise RightShift(>>) Operation\n");
               printf("\n===================================\n");
               printf("\n Which Operation You Want To Perform?:");
               scanf("%d",&type_of_operation);
               switch(type_of_operation)
               {
                   case 1:
                           printf("\n Bitwise And(&) Operation\n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1 & operand2;
                           printf("\n After Bitwise AND :%d",result);
                           break;
                   case 2:
                           printf("\n Bitwise Or(|) Operation\n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1 | operand2;
                           printf("\n After Bitwise OR :%d",result);
                           break;
                   case 3:
                           printf("\n Bitwise Xor(^) Operation\n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand2);
                           result=operand1 ^ operand2;
                           printf("\n After Bitwise XOR :%d",result);
                           break;
                   case 4:
                           printf("\n Bitwise Not(~) Operation\n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           result= ~operand1;
                           printf("\n After Bitwise Not :%d",result);
                           break;
                   case 5:
                           printf("\n Bitwise LeftShift(<<) Operation\n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Number of Digits To Shift:");
                           scanf("%d",&digits);
                           result=operand1 << digits;
                           printf("\nAfter Left Shift  Digits:%d",result);
                           break;
                   case 6:
                           printf("\n Bitwise RightShift(>>) Operation\n");
                           printf("\n Enter Operand Value:");
                           scanf("%d",&operand1);
                           printf("\n Enter Number of Digits To Shift:");
                           scanf("%d",&digits);
                           result=operand1 >> digits;
                           printf("\nAfter Right Shift  Digits:%d",result);
                           break;
                   default:
                           printf("\nInvalid Operation");

               }
               break;
       case 7:
               printf("\n Conditional Operators:\n");
               num_of_operands=2;
               printf("\n Enter Operand Value:");
               scanf("%d",&operand1);
               printf("\n Enter Operand Value:");
               scanf("%d",&operand2);
               result=(operand1 > operand2) ? operand1 : operand2;
               printf("Result is:%d",result);
               break;
       default:
                printf("\n Invalid Choice");

    }
    return 0;
}
