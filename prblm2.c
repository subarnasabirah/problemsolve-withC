#include<stdio.h>
#include<conio.h>
int main()
{
    float cm, inch;
    printf("Enter length in Centimeters: ");
    scanf("%f", &cm);
    inch = cm / 2.54;
    printf("Equivalent length in Inch = %0.2f", inch);
    getch();
    return 0;
}
