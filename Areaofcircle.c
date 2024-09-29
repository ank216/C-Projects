#include <stdio.h>

int main()
{
    int r;
    float area, pi;
    printf("Enter a value of a radius of a circle - ");

    scanf("%d", &r);
    printf("This is the value of your radius- %d \n", r);
    pi = 3.1415;
    area = pi * r * r;
    printf("The area of your circle is %f ", area);
}