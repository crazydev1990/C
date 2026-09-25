#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,sum,sub,mul,div,rem;
    printf("\n Enter Numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("\nAddition is:%d",sum);
    printf("\nSubtraction is:%d",sub);
    printf("\nMultiplication is:%d",mul);
    printf("\nDivision is:%d",div);
    printf("\nReminder is:%d",rem);
    printf("\n----------------------\n");
    printf("Is Equal : %d\n", a == b);
    printf("Not Equal : %d\n", a != b);
    printf("Greater Than : %d\n", a > b);
    printf("Less Than : %d\n", a < b);
    printf("Greater or Equal : %d\n\n", a >= b);
    printf("\n----------------------\n");
    printf("Logical AND : %d\n", (a > b) && (a < 20));
    printf("Logical OR : %d\n", (a < b) || (a > 15));
    printf("Logical NOT : %d\n\n", !(a > b));
    printf("\n----------------------\n");
    printf("Bitwise AND : %d\n", a & b);
    printf("Bitwise OR : %d\n", a | b);
    printf("Bitwise XOR : %d\n", a ^ b);
    printf("Left Shift : %d\n", a << 1); // બિટ્સ ડાબી બાજુ ખસેડવા
    printf("Right Shift : %d\n\n", a >> 1); // બિટ્સ જમણી બાજુ ખસેડવા
    printf("15 << 2 નો જવાબ: %d\n", a << 2);  // જવાબ 60 આવશે
    printf("15 >> 2 નો જવાબ: %d\n", a >> 2);  // જવાબ 3 આવશે
    printf("~15 નો જવાબ: %d\n", ~a);
    printf("\n----------------------\n");
    sum = a; // res માં 10 જશે
    printf("Simple Assignment (=): %d\n", sum);
    sum += 5; // res = res + 5
    printf("Add & Assign (+=): %d\n\n", sum);
    printf("\n----------------------\n");
    printf("--- 6. Increment/Decrement ---\n");
    printf("Pre-Increment (++x): %d\n", ++a); // પહેલા કિંમત વધશે પછી છપાશે
    printf("Post-Increment (y++): %d\n", b++); // પહેલા કિંમત છપાશે પછી વધશે
    printf("Value of y after post-increment: %d\n\n", b);
    printf("--- 7. Ternary Operator ---\n");
    int max = (a > b) ? a : b;
    printf("Max between 10 and 4 is: %d\n\n", max);
    printf("--- 8. Special Operators ---\n");
    printf("Size of integer: %d bytes\n", sizeof(int)); // મેમરી સાઈઝ બતાવે
    return 0;
}
