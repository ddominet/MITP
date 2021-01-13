#include "point.h"
#include <math.h>

float perimeter( struct POINT punktA, struct POINT punktB, struct POINT punktC)
{
   /* wybieram dwa punkty i ilczę długość boku.  */
   
   float bok1 = sqrtf(powf(punktB.x - punktA.x,2) + powf(punktB.y - punktA.y, 2));
   float bok2 = sqrtf(powf(punktC.x - punktA.x,2) + powf(punktC.y - punktA.y, 2));
   float bok3 = sqrtf(powf(punktC.x - punktB.x,2) + powf(punktC.y - punktB.y, 2));
   /* następnie dla pozostałego punktu liczę długość boków i sumuję */

   float obwod = bok1 + bok2 + bok3;

   return obwod;
}

