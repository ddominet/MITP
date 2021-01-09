#include <stdio.h>
#include <math.h>
struct POINT
{
	int x;
	int y;
};

float area( struct POINT, struct POINT, struct POINT );
float perimeter( struct POINT, struct POINT, struct POINT );

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

float perimeter( struct POINT punktA, struct POINT punktB, struct POINT punktC)
{
	/* wybieram dwa punkty i ilczę długość boku.  */
	
	float bok1 = sqrtf(powf(punktB.x - punktA.x,2) + powf(punktB.y - punktA.y, 2));
	float bok2 = sqrtf(powf(punktC.x - punktA.x,2) + powf(punktC.y - punktA.y, 2));
	float	bok3 = sqrtf(powf(punktC.x - punktB.x,2) + powf(punktC.y - punktB.y, 2));
	/* następnie dla pozostałego punktu liczę długość boków i sumuję */

	float obwod = bok1 + bok2 + bok3;

	return obwod;
}






 

		
