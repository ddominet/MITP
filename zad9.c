#include <stdio.h>

int main() {
   
   int h, y;
   printf("Podaj wysokość trójkąta: ");
   scanf("%d", &h);
   y = h;
   printf("\n");
   for(int i=0; i<h; i++){
      y-=1;
      printf("\t");
      for(int x=0; x<y; x++){
         printf(" ");
      }
      for(int x=h-y; x>0; x--){
         printf("%%");
      }
      for(int x=h-y-1; x>0; x--){
         printf("%%");
      }
      printf("\n");

   }
   printf("\n");
   return 0;
}
