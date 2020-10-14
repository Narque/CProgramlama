#include <stdio.h>

int main(){
float a,b,c,x;

printf("Sirasiyla a,b,c ve x degerlerini giriniz:\n");
scanf("%f%f%f%f",&a,&b,&c,&x);
float sonuc = a*x*x + b*x + c;
printf("Denklemin sonucu=%d",(int)sonuc); // Sadece tam sayiyi gormek icin %.0f yapabiliriz "sonuc" degerinin tipini degistirmeden VEYA (int)sonuc yaparak sonuc degerini floattan int e cevirerek sadece tam sayiyi gostermesini saglayabiliriz ama bu sefer %d koymayi unutmamaliyiz.
// printf("Denklemin sonucu=%.0f",(int)sonuc);
int f=30;
float y=48;
double z = 848;
printf("\nint/float %f\n",f/y);
printf("float/double %lf\n",f/z);
printf("double/float %f\n",y/z);
printf("%.lf",(float)f); // int degeri float yapmak







return 0;
}
