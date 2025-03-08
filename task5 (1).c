#include <stdio.h>

int main(){
    double C=0;
    printf("Enter temperature in celsius: ");
    scanf("%lf",&C);
    double F=C*9/5+32;
    printf("Temperature in fahrenheit: %lf",F);
    return 0;
}
 
