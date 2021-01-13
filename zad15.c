#include <stdio.h>
#include "matrix.h"

int main(void)
{
	int x, y;
	MATRIX macierz;
	
	printf("Witaj, Wpisz rozmiar pierwszej macierzy w formacie x y: ");
	scanf("%d %d",&x, &y );
	macierz = m_create(x, y );
	
	printf(" Utworzono pierwszą macierz. Uzupełnij jej elementy: ");
	
	if(m_printf(&macierz ) == 1)
	{
		m_printf(&macierz );
	}
	else if(m_printf(&macierz ) == 0)
	{
		printf("ERROR 0: Podano nieprawidłową liczbę kolumn");
		return 0;
 	}

	m_printf(&macierz );
	
	printf("Podaj elementy macierzy zgodnie z ich kolejnością : ");
	m_scanf(&macierz );
	
	printf("Uzupełniono macierz. Wpisane wartości to: \n");
	
	m_printf(&macierz );

	prinft("Koniec pracy programu zwalniam pamięć: ");

	m_remove(&macierz);

	if(m_remove(&macierz) == 1 ) 
	{
		printf("Operacja zakończona pomyślnie");
	}
	else if(m_ramove(&macierz) == 0 )
	{
		printf("ERROR 0 : Błąd w zwalnianiu pamięci ");
  }	
}
	
	

