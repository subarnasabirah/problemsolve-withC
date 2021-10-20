#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f",&F);
    C = (5.0/9) * (F - 32) ;
    printf("%.2f Fahrenheit = %.2f Celsius", F, C);
    return 0;
}
