#include <stdio.h>

int main(){

   int x;
   
   printf("Podaj jak długi ma być prostokąt: ");
   scanf("%d", &x);
   
   if(x==1){
   printf("\n\t%%%%%%%%%%\n\n");
   }else if(x>0){
   printf("\n\t%%%%%%%%%%\n");
   }else{
   return 0;
   }
   for(x; x > 2; x--){
      printf("\t%%   %%\n");
   }
   if(x==2){
      printf("\t%%%%%%%%%%\n\n");
   }else{
      return 0;
   }   

}
