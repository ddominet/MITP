#include "days.h"

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

