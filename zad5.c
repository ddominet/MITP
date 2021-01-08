#include <stdio.h>

int main(){

   float x;
   char c;
   float y;
   float wynik;
   printf("\npodaj wyrazenie: ");
   scanf("%f%c%f",&x,&c,&y);
   if(c == '*'){
      wynik = x * y;
      printf("wynik: %.1f\n\n",wynik);
   }else if(c == '-'){
      wynik = x - y;
      printf("wynik: %.1f\n\n",wynik);
   }else if(c == '+'){
      wynik = x + y;
      printf("wynik: %.1f\n\n",wynik);
   }else if(c == '/'){
      wynik = x / y;
      printf("wynik: %.1f\n\n",wynik);
   }
   return 0;
}  

