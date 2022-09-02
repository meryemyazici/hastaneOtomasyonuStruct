#include <stdio.h>
#include <stdlib.h>
typedef struct hastane
{
    char hastaAdi[20];
    char hastaSoyadi[20];
    long long int tcKimlik;
    int hastaYasi;
    int durum;
};
int main()
{
    struct hastane *hastalar;
    printf("kac tane hasta var: ");
    int x;
    scanf("%d",&x);

    hastalar=(struct hastane*)malloc(x*sizeof(struct hastane));

    printf("Durum hastanin aciliyetini belirtir\n1-hafif 2-orta 3-agir\n");

    printf("\nKullanici Bilgilerini Giriniz.\n");

    for(int i=0;i<x;i++)
    {
        scanf("%s %s %lld %d %d",(hastalar+i)->hastaAdi,(hastalar+i)->hastaSoyadi,&(hastalar+i)->tcKimlik,&(hastalar+i)->hastaYasi,&(hastalar+i)->durum);

    }
    printf("\nkayit yapan kullanicilar asagida gorulmektedir.\n");


    for(int i=0;i<x;i++)
    {
        printf("%s %s %lld %d %d\n",(hastalar+i)->hastaAdi,(hastalar+i)->hastaSoyadi,(hastalar+i)->tcKimlik,(hastalar+i)->hastaYasi,(hastalar+i)->durum);

    }


    printf("\n65 yas uzeri ve durumu agir olanlar\n");


    for(int i=0;i<x;i++)
    {
        if((hastalar+i)->hastaYasi >=65 && (hastalar+i)->durum==3)
        {
            printf("%s %s %lld %d %d\n",(hastalar+i)->hastaAdi,(hastalar+i)->hastaSoyadi,(hastalar+i)->tcKimlik,(hastalar+i)->hastaYasi,(hastalar+i)->durum);
        }

    }

    return 0;
}
