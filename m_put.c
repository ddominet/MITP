#include "matrix.h"

void m_put(MATRIX* macierz, int x, int y, int wartosc )
{
	*(macierz->wsk + (y + (macierz->y * x))) = wartosc;
}

