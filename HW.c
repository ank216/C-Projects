//Take 2 integers, and a>b Find remainder of a/b

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the bigger and smaller numbers consecutively: ");
    scanf("%d %d",&a,&b);
    float c = a%b;
    printf("The remainder of %d and %d is %f", a,b,c);
    return 0;
    
}