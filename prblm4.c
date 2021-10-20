
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159

int main(){
    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("%f, %f", area, circumference);

    return 0;

}
