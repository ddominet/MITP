#include <stdio.h>
 int main(){
   int a;

   printf("Podaj Wartość temperatury w stopniach Celsjusza: ");
   scanf("%d",&a);
   
   printf("Wartość temperatury w stopniach Fahrenheita: %.0fF\n", 1.8*a+32);
   return 0;
}
