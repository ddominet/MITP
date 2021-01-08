#include <stdio.h>

int main(){
   int liczba1;
   int liczba2;
   
   printf("Podaj pierwsza liczbę ");
   scanf("%d", &liczba1);
   printf("Podaj druga liczbę ");
   scanf("%d", &liczba2);

   if (liczba1>liczba2) {
      printf("Większa jest liczba 1\n");
   } else if (liczba2>liczba1);
      printf("Większa jest liczba 2\n");
   return 0;
}
