#include "days.h"

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

