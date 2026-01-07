#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define PI 3.1415

int secenek;
void serbest_dusme_d(float);
void yukari_atis_d(float);
void agirlik_d(float);
void kutlecekim_potansiyel_d(float, float);
void hidrostatik_basinc_d(float, float);
void arsimet_kaldirma_kuvveti_d(float, float);
void basit_sarkac_periyodu_d(float);
void sabit_ip_gerilmesi_d(float);
void asansor_d(float, float);

float yercekimi_ivmesi[8]={3.7,8.87,9.8,3.7,25.8,10.44,8.69,11.15};
char gezegenler[8][9]={"Merkur", "Venus", "Dunya", "Mars", "Jupiter", "Saturn", "Uranus", "Neptun"};

float sure;
float ilk_hiz;
float kutle;
float yukseklik;
float birim_hacim_kutle;
float hacim;
float uzunluk;
float ivme;

int main()
{
char isim[50];

printf("---DENEY HESAPLAMALARI PROGRAMI---\n");
printf("Deney Hesaplamalari Programina Hosgeldiniz\n");

printf("Adiniz nedir?:");
fgets(isim, 50, stdin);
isim[strcspn(isim, "\n")] = '\0';


do{
printf("\n----YAPILMASI GEREKEN DENEYLER LISTESI----\n");
printf("1. Serbest Dusme Deneyi\n");
printf("2. Yukari Atis Deneyi\n");
printf("3. Agirlik Deneyi\n");
printf("4. Kutlecekimsel Potansiyel Enerji Deneyi\n");
printf("5. Hidrostatik Basinc Deneyi\n");
printf("6. Arsimet Kaldirma Kuvveti Deneyi\n");
printf("7. Basit Sarkac Periyodu Deneyi\n");
printf("8. Sabit Ip Gerilmesi Deneyi\n");
printf("9. Asansor Deneyi\n");

printf("Merhaba %s yukarida verilen deneylerden birini secebilirsin (-1 programdan cikis):",isim);
scanf("%d",&secenek);

switch(secenek){

case 1:

    printf("\n***Serbest Dusme Deneyi***\n");
    printf("\nSure degeri giriniz:",isim);
    scanf("%f",&sure);
    sure < 0 ? sure = -sure : sure;


    serbest_dusme_d(sure);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 2:

    printf("\n***Yukari Atis Deneyi***\n");
    printf("\nIlk hiz degerini giriniz:",isim);
    scanf("%f",&ilk_hiz);
    ilk_hiz < 0 ? ilk_hiz = -ilk_hiz : ilk_hiz;


    yukari_atis_d(ilk_hiz);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 3:

    printf("\n***Agirlik Deneyi***\n");
    printf("\nKutle degerini giriniz:",isim);
    scanf("%f",&kutle);
    kutle < 0 ? kutle = -kutle : kutle;

    agirlik_d(kutle);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 4:

    printf("\n***Kutlecekimsel Potansiyel Enerji Deneyi***\n");
    printf("Kutle degerini giriniz:");
    scanf("%f",&kutle);
    kutle<0 ? kutle=-kutle : kutle;
    printf("\nYukseklik degerini giriniz:");
    scanf("%f",&yukseklik);
    yukseklik < 0 ? yukseklik = -yukseklik : yukseklik;

    kutlecekim_potansiyel_d(kutle,yukseklik);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 5:

    printf("\n***Hidrostatik Basinc Deneyi***\n");
    printf("\nSivinin birim hacimdeki kutle degerini giriniz:",isim);
    scanf("%f",&birim_hacim_kutle);
    birim_hacim_kutle < 0 ? birim_hacim_kutle = -birim_hacim_kutle : birim_hacim_kutle;
    printf("\nYukseklik degerini giriniz:",isim);
    scanf("%f",&yukseklik);
    yukseklik < 0 ? yukseklik = -yukseklik : yukseklik;

    hidrostatik_basinc_d(birim_hacim_kutle,yukseklik);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 6:

    printf("\n***Arsimet Kaldirma Kuvveti Deneyi***\n");
    printf("\nSivinin birim hacimdeki kutle degerini giriniz:",isim);
    scanf("%f",&birim_hacim_kutle);
    birim_hacim_kutle < 0 ? birim_hacim_kutle = -birim_hacim_kutle : birim_hacim_kutle;
    printf("\nHacim degerini giriniz:",isim);
    scanf("%f",&hacim);
    hacim < 0 ? hacim = -hacim : hacim;

    arsimet_kaldirma_kuvveti_d(birim_hacim_kutle,hacim);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 7:

    printf("\n***Basit Sarkac Periyodu Deneyi***\n");
    printf("\nUzunluk degerini giriniz:",isim);
    scanf("%f",&uzunluk);
    uzunluk < 0 ? uzunluk = -uzunluk : uzunluk;

    basit_sarkac_periyodu_d(uzunluk);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 8:

    printf("\n***Sabit Ip Gerilmesi Deneyi***\n");
    printf("\nKutle degerini giriniz:",isim);
    scanf("%f",&kutle);
    kutle < 0 ? kutle = -kutle : kutle;

    sabit_ip_gerilmesi_d(kutle);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

case 9:

    printf("\n***Asansor Deneyi***\n");
    printf("\nKutle degerini giriniz:",isim);
    scanf("%f",&kutle);
    kutle < 0 ? kutle = -kutle : kutle;
    printf("\nIvme degerini giriniz:",isim);
    scanf("%f",&ivme);

    asansor_d(kutle,ivme);
    printf("Deneyi Yapan Bilim Insani:%s\n",isim);

    break;

default:

    printf("\nGecersiz secim\n");

    break;
}
}while(secenek!=-1);

return 0;
}


void serbest_dusme_d(float t){

    for(int i=0; i<8; i++){
    float yukseklik= *(yercekimi_ivmesi+i) * t * t *0.5;
    printf("%s icin deney sonucu:%.2f Metre\n ",*(gezegenler+i),yukseklik);
    }

}

void yukari_atis_d(float v0){

    for(int i=0; i<8; i++){
        float max_yukseklik=(v0 * v0) * 0.5 / *(yercekimi_ivmesi+i);
        printf("%s icin deney sonucu:%.2f Metre\n ",*(gezegenler+i),max_yukseklik);
    }

}

void agirlik_d(float m){

     for(int i=0; i<8; i++){
        float cisim_agirlik = *(yercekimi_ivmesi+i) * m;
        printf("%s icin deney sonucu:%.2f Newton\n",(gezegenler+i),cisim_agirlik);
     }

}

void kutlecekim_potansiyel_d(float m, float h){

    for(int i=0; i<8; i++){
        float kutlesel_pot_enerji = *(yercekimi_ivmesi +i)* m * h;
        printf("%s icin deney sonucu:%.2f Joule\n",*(gezegenler+i),kutlesel_pot_enerji);
    }

}

void hidrostatik_basinc_d(float rho, float h){

    for(int i=0; i<8; i++){
        float hidrostatik_basinc= *(yercekimi_ivmesi+i) * rho * h;
        printf("%s icin deney sonucu:%.2f Pascal\n",*(gezegenler+i),hidrostatik_basinc);
    }

}

void arsimet_kaldirma_kuvveti_d(float rho, float V){

    for(int i=0; i<8; i++){
        float kaldirma_kuvveti= *(yercekimi_ivmesi+i) * rho * V;
        printf("%s icin deney sonucu:%.2f Newton\n",*(gezegenler+i),kaldirma_kuvveti);
    }

}
void basit_sarkac_periyodu_d(float L){

     for(int i=0; i<8; i++){
        float gecen_sure=2*PI*sqrt(L/ *(yercekimi_ivmesi+i));
        printf("%s icin deney sonucu:%.2f Saniye\n",*(gezegenler+i),gecen_sure);
     }

}

void sabit_ip_gerilmesi_d(float m){

    for(int i=0; i<8; i++){
        float gerilme_kuvveti = *(yercekimi_ivmesi+i) * m;
        printf("%s icin deney sonucu:%.2f Newton\n",*(gezegenler+i),gerilme_kuvveti);
    }

}
void asansor_d(float m, float a){

    for(int i=0; i<8; i++){
        float etkin_agirlik = a >= 0 ? m * (*(yercekimi_ivmesi+i) + a) : m * (*(yercekimi_ivmesi+i) - (-a));

        printf("%s icin deney sonucu:%.2f Newton\n",*(gezegenler+i),etkin_agirlik);
    }
}
