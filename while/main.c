#include <stdio.h>

void main()
{
    int suma = 0, ivestas_skaicius, counter=0;
    printf("###Uzduotis: Suskaičiuoti ir išvesti į ekraną nelyginių narių (pirmo, trečio ir t.t.), kurie yra vienaženkliai skaičiai, sumą.###\n");
    printf("Iveskite sveika skaiciu, seka pabaigsite ivesdami nuli\n");
    scanf("%d", &ivestas_skaicius);
    while (ivestas_skaicius!=0)
    {
        counter++;
        if (counter%2!=0 && ivestas_skaicius<10 && ivestas_skaicius >-10)
        {
        printf ("ivestas nelyginis sekos, vienzenklis skaicius, idesim i skaiciuojama suma\n");
        suma += ivestas_skaicius;
        }

        printf("Iveskite sveika skaiciu, seka pabaigsite ivesdami nuli\n");
        scanf("%d", &ivestas_skaicius);

    }
    printf("Ivestu skaiciu, atitinkanciu uzduoties salyga suma,  lygi: %d", suma,"and skaicius is %d", ivestas_skaicius);
}
