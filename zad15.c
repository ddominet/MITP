#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>

int main(void)
{
	int x, y;
	MATRIX macierz_a, macierz_b, macierz_ab;
	
	printf("Witaj, Wpisz rozmiar pierwszej macierzy w formacie x y: ");
	scanf("%d %d",&x, &y );
	macierz_a = m_create(x, y );
	if(m_printf(&macierz_a )==1)
  {
		printf(" Utworzono pierwszą macierz. Uzupełnij jej elementy\n ");
		printf("Podaj elementy macierzy zgodnie z ich kolejnością : ");
		m_scanf(&macierz_a );
  }
  else if(m_printf(&macierz_a )==0)
  {
  	printf("ERROR 0: Podano nieprawidłową liczbę kolumn\n");
  	exit(1);
  }
	
	printf("Uzupełniono macierz. Wpisane wartości to: \n");
	
	m_printf(&macierz_a );
		
	printf("\n Wyznacznikiem powyższej macierzy jest liczba detA = %d\n", m_determinant(&macierz_a));

	printf("Witaj, Wpisz rozmiar drugiej macierzy w formacie x y: ");
	scanf("%d %d",&x, &y );
	macierz_b = m_create(x, y );
	if(m_printf(&macierz_b )==1)
  {
		printf(" Utworzono drugą macierz. Uzupełnij jej elementy\n ");
		printf("Podaj elementy macierzy zgodnie z ich kolejnością : ");
		m_scanf(&macierz_b );
  }
  else if(m_printf(&macierz_b )==0)
  {
  	printf("ERROR 0: Podano nieprawidłową liczbę kolumn\n");
  	exit(1);
  }
	
	printf("Uzupełniono macierz. Wpisane wartości to: \n");
	
	m_printf(&macierz_b );
		
	printf("\n Wyznacznikiem powyższej macierzy jest liczba detB = %d\n", m_determinant(&macierz_b));
	
	printf("Iloczynem wpisanych macierzy jest macierz: \n");
	macierz_ab = m_quotient(&macierz_a, &macierz_b);
	
	m_printf(&macierz_ab);

	printf("\n A wyznacznik tej macierzy detAB to : %d\n", m_determinant(&macierz_ab));
	

	printf("Koniec pracy programu zwalniam pamięć:\n ");
		

	if(m_remove(&macierz_b)==1 && m_remove(&macierz_a)==1) 
	{
		printf("Operacja zakończona pomyślnie\n");
	}
	else if(m_remove(&macierz_b)==0 || m_remove(&macierz_a)==0)
	{
		printf("ERROR 0 : Błąd w zwalnianiu pamięci\n");
  }

}
	
	

