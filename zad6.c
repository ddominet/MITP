#include <stdio.h>

int main(){

   int a,b,c,d;

   printf("Wpisz pierwszą liczbę: ");
   scanf("%d",&a);
   printf("Wpisz drugą liczbę: ");
   scanf("%d",&b);
   printf("Wpisz trzecią liczbę: ");
   scanf("%d",&c);
   printf("Wpisz czwartą liczbę: ");
   scanf("%d",&d);

   printf("%5d\n", a);
   printf("%5d\n", a);
   printf("%5d\n", a);
   printf("%5d\n", a);
   printf(" ----\n");
   printf("%5d\n", a+b+c+d);

   return 0;
}

