#include <stdio.h>

int main(){
    int width=0,lenght=0;
    printf("Enter width and hight ");
    scanf("%i %i", &width, &lenght);
    int res=width*lenght;
    printf("Area %i",res);
    return 0;
}
