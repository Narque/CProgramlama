#include <stdio.h>
#define pi 3.14

int main(){
// DAIRENIN CEVRESININ HESAPLANMASI
float yaricap;
printf("Calculate perimeter of the circle.\n");
printf("Enter diameter of circle:");
scanf("%f",&yaricap);
printf("Perimeter of circle is:%.2f",yaricap * pi);
printf("\n");

// DAIRENIN ALANININ HESAPLANMASI

float yaricap2;
printf("\nCalculate area of the circle.\n");
printf("Enter diameter of circle:");
scanf("%f",&yaricap2);
printf("Area of the circle is:%.2f\n",(pi*yaricap2*yaricap2));
printf("\n");

//KUPUN HACMININ HESAPLANMASI

float kupkenar;
printf("Calculate volume of the cube.\n");
printf("Enter one side of the cube:");
scanf("%f",&kupkenar);
printf("Volume of the cube is:%.2f\n",(kupkenar*kupkenar*kupkenar));
printf("Press Enter to exit");
getch();









return 0;
}
