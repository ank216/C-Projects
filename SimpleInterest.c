#include <stdio.h>

int main() {

    int p, t, r;
    printf("Enter the Principal, time and rate consecutively - ");
    scanf("%d %d %d", &p, &t, &r);
    
    // Cast one variable to float to avoid integer division
    float si = (p * t * (float)r) / 100;
    
    printf("The interest would be: %f\n", si);
    
    return 0;
}
