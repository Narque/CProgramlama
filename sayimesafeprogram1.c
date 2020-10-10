#include <stdio.h>


// SAYI BELIRLEYIP BELIRDIGIMIZ SAYIYA UZAKLIGINI BILMEDIGIMIZ 3 SAYI GIRIP HANGISI EN YAKIN ORTANCA VEYA UZAK HESAPLAMA PROGRAMI


int main(){

	int birsayi,a,b,c,x,y,z;
	printf("Sectiginiz sayiya ve girdiginiz 3 degerin ona en yakin olanini hesaplama programi\n");
	printf("Bir sayi secin:");
	scanf("%d",&birsayi);

	printf("1. sayiyi girin:");
	scanf("%d",&a);

	printf("2. sayiyi girin:");
	scanf("%d",&b);

	printf("3. sayiyi girin:");
	scanf("%d",&c);

	x = birsayi - a;
	y = birsayi - b;
	z = birsayi - c;

	// + - mutlak deger algoritmasi

	if (x < 0){
        x = x * -1;
	}
	if (y < 0){
        y = y * -1;
	}
	if (z < 0){
        z = z * -1;
	}

	// printf("x = %d y = %d z = %d\n",x,y,z); // bunu yapmamin sebebi program hatali calisiyordu asagidaki && "ve" operatorunu bilmedigimden ve koymadigimdan dolayi o yüzden ondan once acaba degerler mi hatali diye bunu yazdirip kontrol ediyordum.

	// MESAFE ALGORITMASI

	if (x>y && x>z && y>z){
		printf("en yakin:%d orta uzaklik:%d en uzak:%d",c,b,a);
	}
	else if(x>z && x>y && z>y){
        printf("en yakin:%d orta uzaklik:%d en uzak:%d",b,c,a);
	}
	else if(y>z && y>x && z>x){
        printf("en yakin:%d orta uzaklik:%d en uzak:%d",a,c,b);
	}
	else if(y>x && y>z && x>z){
        printf("en yakin:%d orta uzaklik:%d en uzak:%d",c,a,b);
	}
	else if(z>y && z>x && y>x){
        printf("en yakin:%d orta uzaklik:%d en uzak:%d",a,b,c);
	}
	else if(z>x && z>y && x>y){
        printf("en yakin:%d orta uzaklik:%d en uzak:%d",b,a,c);
	}
	else {
	}
	getch(); // cmd de calistirinca direkt kapatmasn diye.













	return 0;
}


