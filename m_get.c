#include "matrix.h"


int m_get(MATRIX* macierz, int x, int y)
{
	wynik = *(macierz->wsk + (y + (macierz->y * x)));
	return wynik;
}


