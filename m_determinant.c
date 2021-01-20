#include <stdio.h>
#include <math.h>
#include "matrix.h"


int m_determinant(MATRIX* Macierz)
{
	int wyznacznik = 0;
	int obecna_kolumna, obecny_wiersz;
	MATRIX macierz;

	if(Macierz->x != Macierz->y)
	{
		printf(" Liczba rzędów jest różna od liczby kolumn, nie możliwe obliczznie wyznacznika\n");
		return 0;
	}
	else if(Macierz->x == 1)
	{
		return *(Macierz->wsk);
	}
	else if(Macierz->x == 2)
	{
		return ((*(Macierz->wsk)) * (*(Macierz->wsk + 3)) - (*(Macierz->wsk + 1)) * (*(Macierz->wsk + 2)));
	}
	else
	{
		macierz = m_create((Macierz->x-1), (Macierz->x-1));
		for(int element_rozwiniecia = 0; element_rozwiniecia < Macierz->x; element_rozwiniecia++)
		{	
			obecna_kolumna = 0;
			for(int wiersz = 1; wiersz < Macierz->y; wiersz++)
			{
				obecny_wiersz = 0;
				for(int kolumna = 0; kolumna < Macierz->x; kolumna++)
				{
					if(kolumna == element_rozwiniecia)
					{
						continue;
					}
					m_put(&macierz, obecna_kolumna, obecny_wiersz, m_get(Macierz, wiersz, kolumna));
					obecny_wiersz++;
				}
				obecna_kolumna++;
			}
			wyznacznik += (*(Macierz->wsk+element_rozwiniecia)*pow(-1,element_rozwiniecia)*m_determinant(&macierz));
		}
	}
	m_remove(&macierz);
	return wyznacznik;
}

					
