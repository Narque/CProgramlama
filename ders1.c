#include <stdio.h>
#include <stdlib.h>

// BASIT KARE ALMA FONKSIYONU

void karealalim(int x){ // fonksiyonu yaratıyoruz.

    printf("%d",x*x); //basitce verdigimiz degeri kendisiyle carpip karesini aliyor.
}
int main()
{
    karealalim(5);
    printf("\n"); // bir alt satira yazsin diye.
    karealalim(651);
    return 0;
}
