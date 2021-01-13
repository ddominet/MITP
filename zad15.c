#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>

int main(void)
{
	int x, y;
	MATRIX macierz;
	
	printf("Witaj, Wpisz rozmiar pierwszej macierzy w formacie x y: ");
	scanf("%d %d",&x, &y );
	macierz = m_create(x, y );
	
	if(m_printf(&macierz )==1)
  {
		printf(" Utworzono pierwszą macierz. Uzupełnij jej elementy\n ");
		printf("Podaj elementy macierzy zgodnie z ich kolejnością : ");
		m_scanf(&macierz );
  }
  else if(m_printf(&macierz )==0)
  {
  	printf("ERROR 0: Podano nieprawidłową liczbę kolumn\n");
  	exit(1);
  }
	
	printf("Uzupełniono macierz. Wpisane wartości to: \n");
	
	m_printf(&macierz );

	printf("Koniec pracy programu zwalniam pamięć:\n ");


	if(m_remove(&macierz)==1) 
	{
		printf("Operacja zakończona pomyślnie\n");
	}
	else if(m_remove(&macierz)==0)
	{
		printf("ERROR 0 : Błąd w zwalnianiu pamięci\n");
  }	
}
	
	

