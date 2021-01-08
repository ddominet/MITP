#include <stdio.h>

int main(){
   unsigned long long n;
   
   printf(" Podaj którego n-tego wyrazu ciągu chcesz obliczyć wartość: ");
   scanf("%llu",&n);
   
   if (n<=1) {
      printf(" Wartość %llu wyrazu ciągu wynosi %llu\n",n,n);
      return 0;
   } 
   if (n==2) {
      printf(" Wartość 2 wyrazu ciągu wynosi 1\n");
      return 0;
   }

      unsigned long long x1 = 1;
      unsigned long long x2 = 1;
      unsigned long long suma;
      for(unsigned long long inkrementacja = 3; inkrementacja <= n; inkrementacja++){
          suma = x1 + x2;
          x1 = x2;
          x2 = suma;
      }
      printf(" Wartość %llu wyrazu ciągu wynosi %llu\n",n,x2);

   return 0;
}
