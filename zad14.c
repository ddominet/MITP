#include <stdio.h>
#include "point.h"
#include <math.h>

int main()
{
   struct POINT punkt1, punkt2, punkt3;
   
   printf("Podaj Współrzędne punktu 1 (X Y):  ");
   scanf("%d%d", &punkt1.x, &punkt1.y);
   printf("Podaj Współrzędne punktu 2 (X Y):  ");
   scanf("%d%d", &punkt2.x, &punkt2.y);
   printf("Podaj Współrzędne punktu 3 (X Y):  ");
   scanf("%d%d", &punkt3.x, &punkt3.y);
   
   printf(" Pole trójkąta otrzymanego z zadanych współrzędnych to : %f\n", area( punkt1, punkt2, punkt3 ));
   printf(" Obwód trójkąta otrzymanego z zadanych współrzędnych to : %f\n", perimeter(punkt1, punkt2, punkt3 ));
   
   return 0;

}

