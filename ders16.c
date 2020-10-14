#include <stdio.h>

int main(){
    int ahmet;

    printf("Please enter your age:");
    scanf("%d",&ahmet);

// if else operatorleri
// 5 > 4  , 4 < 7  büyük kücük zaten
// 4 == 4 esit olup olmamasini sorguluyor.
// 5 != 6 esit degildir.
// 5 >= 5 buyuk esit.
// 5 <= 6 kucuk esit.

    if(ahmet >= 18){
        printf("Resitsiniz.\n");
}
    else {
        printf("Resit degilsiniz.\n");
    }
// 80-100 cok iyi
// 60-80  iyi
// 40-60  orta
// 20-40  kotu
// 0-20   berbat amk

    int puan;
    printf("Puaninizi giriniz:");
    scanf("%d",&puan);

    if (puan >= 80){
        printf("cok iyi");
    }
    else if(puan < 80 && puan >= 61){
        printf("iyi");
    }
    else if(puan < 60 && puan >=41){
        printf("orta");
    }
    else if(puan < 40 && puan >= 21){
        printf("kotu");
    }
    else if(puan < 21 && puan >= 0){
        printf("berbat amk");
    }
    return 0;
}
