#include<stdio.h>
#include<conio.h>

int main(){
    float time;
    char p;
    printf("Enter time and A/P (e.g., 12.5 A or 7.5 P): ");
    scanf("%f %c", &time, &p);
    if ((p == 'P' || p == 'p') && time != 12.0)
        time = time + 12.0;
    if ((p == 'A' || p == 'a') && time == 12.0)
        time = 0.0;
    if (time >= 4.0 && time < 12.0) {
        printf("Good Morning!\n");
    } else if (time >= 12.0 && time < 17.0) {
        printf("Good Afternoon!\n");
    } else if (time >= 17.0 && time < 22.0) {
        printf("Good Evening!\n");
    } else {
        printf("Good Night!\n"); // Handles 10:00 PM to 3:59 AM seamlessly
    }
    return 0;
}
