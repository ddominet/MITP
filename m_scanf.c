#include <stdio.h>
#include "matrix.h"

int m_scanf(MATRIX* macierz)
{
	int wartosc;
	for(int x = 0; x < macierz->x; x++)
	{
		for(int y = 0; y < macierz->y; y++)
		{
			scanf("%d", &wartosc);
			m_put(macierz, x, y, wartosc);
		}
	}
	return 1;
}	
