#include<stdio.h>
#include<conio.h>

void a();
void b();
int main()
{
    a();
    b();
    a();
    return 0;
}
void a()
{
    printf("\n Call From Inside A()\n");
}
void b()
{
    printf("\n Call From Inside B()\n");
    a();
}
