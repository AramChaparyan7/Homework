#include <stdio.h>

int main(){
   int a=0;
   scanf("%i",&a);
   int h=0,m=0,s=0;
   h=a/60;
   a%=60;
   m=a/60;
   a%=60;
   s=a;
   printf("%i %i %i",h,m,s);
   return 0;
}
