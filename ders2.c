#include <stdio.h>
#include <stdlib.h>

int main()
{

//      Kac yilinda dogdugunu bulmak icin kullanicidan int tipi deger alip mevcut yildan cikariyoruz
//		Aslinda seneye 2021 olacak her yil guncellemek lazim :D

int yas;

printf("Please enter your age:");
scanf("%d",&yas);
printf("Your birthday is %d",2020-yas);

return 0;
}
