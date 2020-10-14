#include <stdio.h>

int main(){
// BASAMAK COZUMLEME

int sayi,onbinler,binler,yuzler,onlar,birler;

printf("5 basamakli bir sayi giriniz:");
scanf("%d",&sayi);
printf("Girilen sayi:%d\n",sayi);
onbinler = sayi / 10000;
binler = (sayi % 10000) / 1000;
yuzler = (sayi % 1000) / 100;
onlar =  (sayi % 100) / 10;
birler = sayi % 10;
printf("%d     %d     %d     %d     %d",onbinler,binler,yuzler,onlar,birler);







return 0;
}
