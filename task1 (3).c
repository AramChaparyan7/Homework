#include <stdio.h>

int main(){
    int a=0,b=0;
    scanf("%i %i",&a,&b);
    int t=a;
    a=b;
    b=t;
    printf("%i %i",a,b);
    return 0;
}
