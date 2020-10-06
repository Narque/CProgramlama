#include <stdio.h>
#define pi 3.14
//define da bildigin  deger veriyorsun bundan sonra pi hep 3.14 oluyor define zaten tanimlamak demek. Denemek istersen const olan satira // koyarak yorum satiri yap dene.
int main(){

//const double pi = 3.14; // const olunca pi yi 3.14 tanimladik yani artik degistirilemez.

//pi = 4; const olunca degismiyordu isterseniz // ları silerek deneyebilirsiniz

//printf("%d",pi);	

float yaricap;

printf("Please enter radius of the circle:");

scanf("%f",&yaricap);

printf("Diameter of the circle = %f", 2*pi*yaricap);

printf("\nPress ENTER to exit...");

getch();

return 0;
}
