#include<stdio.h>
#include<conio.h>

int main()
{
    char str[20]="INDIA IS THE BEST";
    int length=0,i=0;
    while(str[i] != '\0')
    {
        length=length+1;
        i++;
    }
    printf("\n Length Of String: %d",length);
    return 0;
}
