#include <stdio.h>

void licznikdni(dzien, miesiac, rok);
int days(struct DAY, struct DAY);

struct DAY 
{
	int dzien;
	int miesiac;
	int rok;
};

int main()
{
	struct DAY data1, data2;
	
	printf("Podaj daty w formacie DD.MM.RRRR DD.MM.RRRR: ");
	scanf("%d.%d.%d %d.%d.%d", &data1.dzien, &data1.miesiac, &data1.rok, &data2.dzien, &data2.miesiac, &data2.rok);
  
	printf("Pomiędzy tymi datami liczba dni wynosi: %d\n", days(data1, data2));
	return 0;
}

/* Funkcja Licząca dni od roku 0 */

void licznikdni(dzien, miesiac, rok)
{
	liczba = dzien 

	const int tab[12]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for(int i = 1; i!=miesiac ; i++) 
	{
		liczba+=tab[i-1];
	}
	liczba+=rok*365;

	if(miesiac <= 2)
	{
		liczba+=(rok-1)/4-(rok-1)/100+(rok-1)/400;
	}
	else
	{
		liczba+=rok/4-rok/100+rok/400;
	}
	return liczba;
}
	/* Funkcja licząca różnicę pomiędzy dwoma datami */

int days(struct DAY data1, struct DAY data2)
{
	int ilosc1, ilosc2, wynik;
	ilosc1 = licznikdni(data1.dzien, data1.miesiac, data1.rok);
	ilosc2 = licznikdni(data2.dzien, data2.miesiac, data2.rok);
	
	wynik = ilosc1 - ilosc2
	
	if(wynik<0)
	{
		wynik = -wynik
	}
	return wynik;
}
	
