#include <stdio.h>

int main(){


    //////////////C H E A T S H E E T///////////////
    //                                            //
    // TOPLAMA sayi++, sayi += 1, sayi = sayi + 1 //
    // CIKARMA sayi--, sayi -= 1, sayi = sayi - 1 //
    // CARPMA  ------, sayi *= 4, sayi = sayi * 4 //
    // BOLME   ------, sayi /= 3, sayi = sayi / 3 //
    // MOD ALMA -----, sayi %= 5, sayi = sayi % 5 //
    //                                            //
    //00000000000000000000000000000000000000000000//


    //TOPLAMA ISLEMI

    int sayi1;

    sayi1 = 5;

    printf("Sayi1 in degeri:%d \n",sayi1);

    sayi1 = sayi1 + 1; // 3 kullanimi var sayiyi 1 arttirmak icin 1.si bu

    // veya

    sayi1 += 1; // 2.sý bu

    sayi1++;  // 3.su bu

    printf("Islemlerden sonraki degeri:%d",sayi1);

    int sayi2;

    // EKSILTME ISLEMI

    sayi2 = 6;

    sayi2--;
    sayi2 = sayi2 - 1;
    sayi2 -= 1;
    printf("\nSayi2nin degeri 6 idi simdi:%d",sayi2);

    // CARPMA ISLEMI

    int sayi3;

    sayi3 = 5;
    printf("\nSayi3un degeri:%d",sayi3);
    sayi3 *= 5;
    printf("\nilk adim:%d\n", sayi3);
    sayi3 = sayi3 * 5;
    printf("ikinci adim:%d", sayi3);

    // BOLME ISLEMI

    int sayi4;

    sayi4 = 16;
    printf("\nSayi4un degeri:%d\n",sayi4);
    sayi4 /= 4;
    printf("Ilk adim:%d\n",sayi4);
    sayi4 = sayi4/2;
    printf("Ikinci adim:%d",sayi4);

    // MOD ALMA

    int sayi5;

    sayi5 = 18;
    printf("\nSayi5in degeri:%d\n",sayi5);
    sayi5 %= 5;
    printf("Sayi5'in mod 5ini aldik:%d\n",sayi5);
    sayi5 = sayi5 % 3;
    printf("Sayi5'in mod 5inin mod 3unu aldik:%d",sayi5);


    return 0;
}
