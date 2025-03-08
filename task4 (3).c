#include <stdio.h>

int main(){
   int a=0;
   scanf("%i",&a);
   int y=0,m=0,d=0;
   y=a/365;
   a%=365;
   m=a/30;
   a%=30;
   d=a;
   printf("%i %i %i",y,m,d);
   return 0;
}
