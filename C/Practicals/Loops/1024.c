#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num, temp, fact, digit, sum = 0, i;
    printf("Enter Number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0){
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum == num){
        printf("\n %d is Strong Number\n", num);
    }else{
        printf("\n %d is not Strong Number\n", num);
    }
    return 0;
}
