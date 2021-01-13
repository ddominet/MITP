#include "point.h"

float area( struct POINT punktA, struct POINT punktB, struct POINT punktC )
{
   /* tworzę statyczną tablicę 2d którą traktuję jak macierz i przypisuje jej wartości   */  

   float tab[2][2];
   tab[0][0] = (punktB.x - punktA.x);
   tab[0][1] = (punktB.y - punktA.y);
   tab[1][0] = (punktC.x - punktA.x);
   tab[1][1] = (punktC.y - punktA.y);
   
   /* liczę wyznacznik macierzy 2x2 i wstawiam go w wzór na pole  */

   float det = tab[0][0] * tab[1][1] - tab[0][1] * tab[1][0];
   
   if(det < 0)
   {
      det = -det;
   }
   float pole = det/2;
   
   return pole;
}

