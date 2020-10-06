#include <stdio.h>

int main(){

// RAMDA HANGI TIP NE KADAR YER KAPLAR.

int integer = 6; // 4 byte
double kilo = 97.2; // 8 byte
short int uzunlukl; // 2 byte
long int uzunluk2;  // 4 byte
char harf = 'E';  // 1 byte
float kesirlisayi = 9.2; //4 byte
char dizi[18] = "Kirmizi Araba 789"; //Burda ayarlarken kaç harf varsa bosluk da dahil 1 fazlasini yazmak gerekiyor. Yani 10 harf kapliyorsa [11] yazmaliyiz.

printf("%5d\n",integer); //%5s,c,s,f onune koyuldugunda sayinin -1 i kadar bosluk birakiyor 2 nin yerine de istedigini yaz
printf("%.1f\n", kilo);
printf("%c\n",harf);
printf("%s\n",dizi);
printf("%.1f\n",kesirlisayi); // %.1f tam sayidan sonraki kesirli kisimda kac basamak gostersin onun için
printf("Programi sonlandirmak icin enter a basiniz.");
getch();


return 0;
}
