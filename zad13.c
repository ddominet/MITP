#include <stdio.h>

int licznikdni(int dzien, int miesiac, int rok);
int days();

struct DAY
{
	int dzien;
	int miesiac;
	int rok;
};

int main()
{
	struct DAY data1, data2;
	int test;
	printf("Podaj daty w formacie DD.MM.RRRR DD.MM.RRRR: ");
	scanf("%d%d%d%d%d%d", &data1.dzien, &data1.miesiac, &data1.rok, &data2.dzien, &data2.miesiac, &data2.rok);
	printf("Pomiędzy tymi datami liczba dni wynosi: %d\n", days(data1, data2));
	return 0;
}

/* Funkcja Licząca dni od roku 0 */

int licznikdni(int dzien,int miesiac,int rok)
{
	int liczba = dzien;
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
  if(rok==1582 && (miesiac >= 10 && dzien > 14 || miesiac > 10) || rok > 1582)
  {
  	liczba+=2;
  }
  else if(miesiac<=2)
  {
  	liczba+=(rok-1)/100-(rok-1)/400;
  }
  else if(miesiac>2)
  {
  	liczba+=rok/100-rok/400;
  }
  return liczba;
}
   /* Funkcja licząca różnicę pomiędzy dwoma datami */


int days(struct DAY liczba1, struct DAY liczba2)
{
	int ilosc1, ilosc2, wynik;
  ilosc1 = licznikdni(liczba1.dzien, liczba1.miesiac, liczba1.rok);
  ilosc2 = licznikdni(liczba2.dzien, liczba2.miesiac, liczba2.rok);

  wynik = ilosc1 - ilosc2;

  if (wynik < 0)
  {
  	wynik = -wynik;
  }
  return wynik;
}
