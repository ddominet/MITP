#include <stdio.h>

int main() {

   float a;
   
   printf("Podaj liczbę: ");
   scanf("%f",&a);

   if (a!=(int)a) {
      printf("Liczba nie jest całkowita\n");
   }
   else {
      printf("Liczba jest całkowita\n");
      if ((int)a%2)
         printf("Liczba jest nieparzysta\n");
      else
         printf("Liczba jest parzysta\n");
   }
   return 0;
}
   
