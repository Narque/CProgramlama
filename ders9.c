#include <stdio.h>

int main(){

int numba;

printf("Please enter a numba:");

scanf("%d",&numba);

printf("You entered this number: %d \n",numba);

int integer;

char karakter;

float floatnumba;

double doublefloat;

char stringmf[5];


printf("Please enter integer type variable: ");
scanf("%d",&integer);

printf("Please enter a character: ");
scanf(" %c",&karakter); // karakteri alsin diye bir bosluk biraktik tirnaktan sonra

printf("Please enter float type number: ");
scanf("%f",&floatnumba);

printf("Please enter double type number: ");
scanf("%lf",&doublefloat);  //double floatin 2 kati oldugu için 8 bitlik veriyi 4 bitle almaya ve printte basmaya çalistik ondan %lf olarak aliyoruz.

printf("Please enter a sentence: ");
scanf("%s",&stringmf);

printf("%d\n",integer);
printf("%c\n",karakter);
printf("%.2f\n",floatnumba);
printf("%.2lf\n",doublefloat); // %.2lf nin mantigi önce .2 demek sadece tam sayıdan sonraki kesirli sayiyi 2 basamak gostermek demek. lf yi üst tarafta anlattim zaten.
printf("%s",stringmf);







    return 0;
}
