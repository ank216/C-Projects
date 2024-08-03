#include <stdio.h>

int main() {
    float n, z, sum, step;
    printf("Enter 2 numbers from which to start counting and to end counting: ");
    scanf("%f%f", &n, &z);
    printf("Enter the step size: ");
    scanf("%f", &step);
    sum = 0;

    if (n <= z) {
        for (float i = n; i <= z; i += step) {
            sum = sum + i;
        }
    } else {
        for (float i = n; i >= z; i -= step) {
            sum = sum + i;
        }
    }

    printf("The sum of numbers from %.2f to %.2f with step size %.2f is: %.2f\n", n, z, step, sum);
    return 0;
}
