#include <stdio.h>

int main()
{
    float x;
    int y;
    printf("Enter the values for the decimal for which we want the fractional part: ");
    scanf("%f",&x);
    y = x;
    float z = x - y;
    printf("The fractional part of %f is %f",x,z);
    
}
