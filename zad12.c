#include <stdio.h>

int main(void)
{
    int kwota;
    printf("Wpisz wartość kwoty do podziału: ");
    scanf("%d",&kwota);

    // Sprawdzam czy podaną kwotę da się rozmienić
    if(kwota%10 == 0 && kwota >= 20 && kwota != 30)
    {
        for(int wielokrotnosc20 = 0; wielokrotnosc20 <= kwota/20; wielokrotnosc20++)
        {
            for(int wielokrotnosc50 = 0; wielokrotnosc50 <= (kwota - wielokrotnosc20 * 20)/50; wielokrotnosc50++)
            {
                int wielokrotnosc100 = ((kwota -(50 * wielokrotnosc50) - (20 * wielokrotnosc20)) / 100);
    //wyświetlenie tylko poprawnych wyników
                if((20 * wielokrotnosc20 + 50 * wielokrotnosc50 + 100 * wielokrotnosc100) == kwota)
                {
                    printf("%d PLN = %4d*100     + %4d*50     +%4d*20\n", kwota, wielokrotnosc100, wielokrotnosc50, wielokrotnosc20);
                }
            }
        }
    }
    else
    {
        printf(" Kwoty nie da się rozmienić: \n");
    }
    return 0;
}

