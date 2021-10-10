#include <stdio.h>

void main()
{
    int suma = 0, ivestas_skaicius, counter=1;
    printf("###Uzduotis: Suskaičiuoti ir išvesti į ekraną nelyginių narių (pirmo, trečio ir t.t.), kurie yra vienaženkliai skaičiai, sumą.###\n");
    for (counter=1; counter<100000; counter++)
    {
        printf("Iveskite sveika skaiciu, seka pabaigsite ivesdami nuli\n");
        scanf("%d", &ivestas_skaicius);
        if (counter%2!=0 && ivestas_skaicius<10 && ivestas_skaicius >-10)
            {
            printf ("ivestas nelyginis sekos eiles, vienzenklis skaicius, idesim i skaiciuojama suma\n");
            suma += ivestas_skaicius;
            }
        if (ivestas_skaicius==0)
            {
            printf("ivesta nelyginu sekos nariu vienzenkliu skaiciu suma yra lygi %d", suma);
            break;
            }
    }
}

