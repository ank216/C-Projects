#include <stdio.h>

int main()
{
    float r;
    float pi = 3.14159265358979323846;
    float volume, x;

    printf("Give the value of radius - ");
    scanf("%f", &r);  
    
    x = 4.0 / 3.0;   
    volume = x * pi * r * r * r;
    
    printf("The volume is %f cubic cm\n", volume); 
    float y;
    
    return 0;


}
