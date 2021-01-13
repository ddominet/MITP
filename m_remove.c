#include <stdlib.h>
#include "matrix.h"


int m_remove(MATRIX* macierz)
{
	if(macierz->wsk == NULL)
	{	
		return 0;
	}
	else
	{
		free(macierz->wsk);
		macierz->x = 0;
		macierz->y = 0;
	}

	return 1;
}
