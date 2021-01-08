#include <stdio.h>

void function(){
   static int x=1;
   printf(" %d :wywołanie\n", x++);
}

int main(){
   int y;
   printf("Podaj ile razy ta funkcja ma zostać wywołana: ");
   scanf("%d",&y);
   for(int i=0; i<y; i++){
      function();

   }
   return 0;
}
