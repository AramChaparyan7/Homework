#include <stdio.h>

int main(){
   int a=0;
   scanf("%i",&a);
   int y=0,w=0,d=0;
   y=a/365;
   a%=365;
   w=a/7;
   a%=7;
   d=a;
   printf("%i %i %i",y,w,d);
   return 0;
}
