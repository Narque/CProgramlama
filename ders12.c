#include <stdio.h>

// KARENIN ALANINI BULAN PROGRAM

/*  l l l l l
    l       l
    l       l  5 <--- KARE bir kenarý 5 olursa alaný 5x5 olur. Veya x bir girdi olsun => x*x olur.
    l       l
    l l l l l
    * ----- *
        5
*/

int main(){

int karebirkenar;

printf("Please enter side of square: ");

scanf("%d",&karebirkenar); // kullanicidan sayi aliyoruz.

// GORSEL KOD BASLANGIC :D

printf("\t\n");
printf("       %d\n",karebirkenar);
printf("\t\n");
printf("   l l l l l\n");
printf("   l       l\n");
printf("%d  l       l  %d\n",karebirkenar,karebirkenar);
printf("   l       l\n");
printf("   l l l l l \n");
printf("\t\n");
printf("       %d\n",karebirkenar);
// GORSEL KOD BITIS.

printf("\nArea of the square is: %d",karebirkenar * karebirkenar);


// UCGENIN ALANININ HESAPLANMASI

float basesideoftri; // Tabanin degeri icin olusturduk.
float heightoftri; // Yukseklik   ""    ""      ""    .

printf("\nEnter baseside of the triangle:");
scanf("%f",&basesideoftri);
printf("Enter height of triangle:");
scanf("%f",&heightoftri);

// GORSEL BASLANGIC
printf("\t\n");
printf("          l\n");
printf("         l l\n");
printf("        l l l\n");
printf("       l  l  l\n");
printf("      l   h=%.0f l     h = %.0f\n",heightoftri,heightoftri);
printf("     l    l    l\n");
printf("    l     l     l\n");
printf("   l l l l l l l l\n");
printf("          a=%.0f       a = %.0f\n",basesideoftri,basesideoftri);
printf("\t\n");

// GORSEL BITIS

printf("Area of triangle is: %.1f",(basesideoftri * heightoftri) / 2); // SONUC




return 0;
}
