#include <stdio.h>
#include "matrix.h"

MATRIX m_quotient(MATRIX* macierz_a, MATRIX* macierz_b)
{
	MATRIX macierz_ab;
	
	if ( macierz_a->x =! macierz_b->y)
	{
		printf(" Nie możliwe jest wykonanie iloczynu\n");
	}
	else if( macierz_a->x = macierz_b->y)
	{
		macierz_ab = m_create(macierz_a->x, macierz_b->y );
		for(int wiersz_a = 0; wiersz_a < macierz_a->y; wiersz_a++)   /* Wybieramy wiersz macierzy A, który będziemy mnożyć przez kolejne elementy macierzy B */
		{
			for(int kolumna_b = 0; kolumna_b < macierz_b->x; kolumna_b++)    /*Wybieramy  */
			{
				int wierszxkolumna = 0;
				for (int element = 0; element < macierz_a->x; element++)
				{
					wierszxkolumna += m_get( macierz_a, element, wiersz_a) * m_get( macierz_b, kolumna_b, element);
				}
				m_put(&macierz_ab, kolumna_b, wiersz_a, wierszxkolumna);
			}
		}
	}
	return macierz_ab;
}
